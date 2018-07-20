package generics;
import java.io.*;
import java.util.*;
public class ClassCasting {
public void f(String[] args) throws Exception{
	ObjectInputStream in=new ObjectInputStream(new FileInputStream(args[0]));
	List<Weight>lw2=List.class.cast(in.readObject());
	//泛型类转型
}
}
