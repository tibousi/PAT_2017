import java.util.Scanner;

public interface Testlnterface {
String myVar="Hello Interface";
Object write();
Object read();
}
class IT implements Testlnterface{
public Object write(){
	Scanner sc=new Scanner(System.in);
	System.out.println("write:");
	String wr=sc.nextLine();
	return wr;
}
public Object read(){
	return null;
}

}
