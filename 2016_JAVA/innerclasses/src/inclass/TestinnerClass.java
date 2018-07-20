package inclass;

class D{}
abstract class E{
	String ses="eee";
}
class Z extends D{
	E makeE(){
		return new E(){
			public void pte(){
			System.out.println(ses);}
		};
	}
}
public class TestinnerClass {
	static void testD(D d){}
	static void testE(E e){}
	public static void main(String[] args) {
		Z z=new Z();
		testD(z);
		testE(z.makeE());
		z.pte();
	}

}
