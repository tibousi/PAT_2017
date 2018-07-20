package testException;

class NeedsCleanup{
	private static long counter=1;
	private final long id=counter++;
	public void dispose(){
		System.out.println("needsCleanup "+id+"disposed");
	}
}
class ConstructionException extends Exception{
	public String toString(){
		String s="CEX";
		return s;
	}
}
class NeedsCleanup2 extends NeedsCleanup{
	public NeedsCleanup2() throws ConstructionException{}
}
public class CleanupIdiom {
	public static void main(String[] args){
		//section1
		NeedsCleanup nc1=new NeedsCleanup();
		try{
			
		}finally{
			nc1.dispose();
		}
		//section2
		NeedsCleanup nc2=new NeedsCleanup();
		NeedsCleanup nc3=new NeedsCleanup();
		try{
			
		}finally{
			nc3.dispose();
			nc2.dispose();
		}
		//section3
		try{
			NeedsCleanup2 nc4=new NeedsCleanup2();
			try{
				NeedsCleanup2 nc5=new NeedsCleanup2();
				try{
					
				}finally{
					nc5.dispose();
				}
			}catch(ConstructionException e){
				System.out.println(e);
			}finally{
				nc4.dispose();
			}
		}catch(ConstructionException e){
			System.out.println(e);
		}
	}
}
