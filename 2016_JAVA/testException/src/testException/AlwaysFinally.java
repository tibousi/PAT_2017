package testException;

class FourException extends Exception{
	public FourException(){
		System.out.println("4EX");
	}
}
public class AlwaysFinally {
public static void main(String[] args){
	System.out.println("Entering first try block");
	try{
		System.out.println("Entering the second block");
		try{
			throw new FourException();
		}finally{
			System.out.println("finally in 2rd try block");
		}
	}catch(FourException e){
		System.out.println("Caught FourException in 1st try block");
	}finally{
		System.out.println("finally in 1st try block");
	}
}
}
