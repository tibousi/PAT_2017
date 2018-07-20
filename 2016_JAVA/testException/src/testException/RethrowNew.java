package testException;

class oneException extends Exception{
	public oneException(String s){
		super(s);
	}
}
class twoException extends Exception{
	public twoException(String s){
		super(s);
	}
}
public class RethrowNew {
	public static void f() throws oneException{
		System.out.println("Originating the Exception in f()");
		throw new oneException ("throw from f()");
	}
	public static void main(String[] args){
		try{
			try{
				f();
			}catch(oneException e){
				System.out.println("Caught in inner try, e.printStackTrace");
				e.printStackTrace(System.out);
				throw new twoException("from inner try");
			}
		}catch(twoException e){
			System.out.println("Caught in inner try , e.printStackTrace()");
			e.printStackTrace(System.out);
		}
	}
}
