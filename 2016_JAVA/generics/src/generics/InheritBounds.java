package generics;
interface HasColor{java.awt.Color getColor();}
class Dimension{public int x,y,z;}
interface Weight{int weight();}
class HoldItem<T>{
	T item;
	HoldItem(T item){
		this.item=item;
	}
	T getItem(){return item;}
}
class Colored2<T extends HasColor>extends HoldItem<T>{
	Colored2(T item){super(item);}
	java.awt.Color color(){
		return item.getColor();
	} 
}
class ColoredDimension2<T extends Dimension&HasColor>extends Colored2<T>{
	ColoredDimension2(T item){super(item);}
	int getX(){return item.x;}
	int getY(){return item.y;}
	int getZ(){return item.z;}
}
class Solid2<T extends Dimension&HasColor&Weight>extends ColoredDimension2<T>{
	Solid2(T item){super(item);}
	int weight(){return item.weight();}
}
class Bounded extends Dimension implements HasColor,Weight{
	public java.awt.Color getColor(){return null;}
	public int weight() {
		return 0;
	}
}
public class InheritBounds {
public static void main(String[] args){
	Solid2<Bounded>solid2=new Solid2<Bounded>(new Bounded());
	solid2.color();
	solid2.getX();
	solid2.weight();
}
}
