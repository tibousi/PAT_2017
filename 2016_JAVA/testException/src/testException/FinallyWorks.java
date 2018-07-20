package testException;
class ThreeException extends Exception{}
public class FinallyWorks {
	static int i=0;
	public static void main(String[] args){
		while(true){
		try{
			if(i++==0)
				throw new ThreeException();
			System.out.println("No Exception");
		}catch(ThreeException e){
			System.out.println("ThreeException");
		}finally{
			System.out.println("Finally");
			if(i==2) break;
		}
	}
}
}
