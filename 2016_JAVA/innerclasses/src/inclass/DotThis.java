package inclass;

public class DotThis {
void f(){System.out.println("DotThis.f()");}
private class Inner{
	private DotThis outer(){
		return DotThis.this;
	}
}
public Inner inner(){
	return new Inner();
}
public static void main(String[] args)
{
	DotThis dt=new DotThis();
	DotThis.Inner dti=dt.new Inner();
	dti.outer().f();
	}
}
