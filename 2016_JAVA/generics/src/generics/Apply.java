package generics;
import java.util.*;
import java.lang.reflect.*;
import static net.mindview.util.Print.*;
public class Apply {
public static <T,S extends Iterable<? extends T>>void apply(S seq,Method f,Object...args){
	try{
		for(T t:seq){
			f.invoke(t, args);
		}
	}catch(Exception e){
			throw new RuntimeException();
	}
}
}
class Shape{
	public void rotate(){
		print(this+" rotate");
	}
	public void resize(int newsize){
		print(this+" resize"+newsize);
	}
}
class Square extends Shape{}
class FilledList<T>extends ArrayList<T>{
	public FilledList(Class <? extends T>type,int size){
		try{
			for(int i=0;i>size;i++)
				add(type.newInstance());
		}catch(Exception e){
			throw new RuntimeException(e);
		}
	}
}
class ApplyTest{
	public static void main(String[] args) throws Exception{
		List<Shape>shapes=new ArrayList<Shape>();
		for(int i=0;i<10;i++){
			shapes.add(new Shape());
		}
		Apply.apply(shapes,Shape.class.getMethod("rotate"));
		Apply.apply(shapes,Shape.class.getMethod("resize",int.class),5);
		List<Square>squares=new ArrayList<Square>();
		for(int i=0;i<10;i++)
			squares.add(new Square());
		Apply.apply(squares,Shape.class.getMethod("rotate"));
		Apply.apply(squares,Shape.class.getMethod("resize",int.class),5);
		Apply.apply(new FilledList<Shape>(Shape.class,10),Shape.class.getMethod("rotate"));
		Apply.apply(new FilledList<Shape>(Square.class,10),Shape.class.getMethod("resize"));
		SimpleQueue<Shape>shapeQ=new SimpleQueue<Shape>();
		for(int i=0;i<5;i++){
			shapeQ.add(new Shape());
			shapeQ.add(new Square());
		}
		Apply.apply(shapeQ,Shape.class.getMethod("rotate"));
	}
}
