package typeinfo;
import java.util.*;
class CountedInteger{
	private static long counter;
	private final long id=counter++;
	public String toString(){
		return Long.toString(id);
	}
}
public class Filledlist<T> {
	private Class<T> type;
	public Filledlist(Class<T> type){this.type=type;}
	public List<T> create(int nElements){
		List<T> result=new ArrayList<T>();
		try{
			for(int i=0;i<nElements;i++)
				result.add(type.newInstance());
		}catch(Exception e){
			throw new RuntimeException();
		}
		return result;
	}
	public static void main(String[] args){
		Filledlist<CountedInteger> f1=new Filledlist<CountedInteger>(CountedInteger.class);
		System.out.println(f1.create(15));
	}
}
