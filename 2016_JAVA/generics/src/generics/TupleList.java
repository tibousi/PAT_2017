package generics;
import java.util.*;
import net.mindview.util.*;
public class TupleList<A,B,C,D>extends ArrayList<FourTuple<A,B,C,D>> {
	public static void main(String[] args){
		TupleList<Long,Float,String,Integer>t1=new TupleList<Long,Float,String,Integer>();
		t1.add(TupleTest2.h());
		t1.add(TupleTest2.h());
	}
}
