package generics;
import java.util.*;
public class GenericsAndCovariance {
public static void main(String[] args){
	List<? extends Fruit>flist=new ArrayList<Apple>();
	flist.add(null);
	Fruit f=flist.get(0);
}
}
