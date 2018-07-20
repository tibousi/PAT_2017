package cx;

public class Child  extends Father{
	
private int no;
public void study(){
	System.out.println("study");
}
@Override
	public void print() {
		System.out.println("child print"+no);
	}
}
