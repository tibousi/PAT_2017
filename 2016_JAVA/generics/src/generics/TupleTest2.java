package generics;
import net.mindview.util.*;
import static net.mindview.util.Tuple.*;
public class TupleTest2 {
	static TwoTuple<String ,Integer>f(){
		return tuple("hi",47);
	}
	static TwoTuple f2(){
		return tuple("hi",47);
	}
	static FourTuple<Vehicle,Amphibian,String,Integer>h(){
		return tuple(new Vehicle(),new Amphibian(),"hi",47);
	}
}
