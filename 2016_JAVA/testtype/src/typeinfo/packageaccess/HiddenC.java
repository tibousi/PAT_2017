package typeinfo.packageaccess;
import typeinfo.interfacea.*;
class C implements A{
	public void f(){
		System.out.println("public c.f()");
	}
	public void g(){
		System.out.println("public c.g()");
	}
	void u(){
		System.out.println("Package C.u()");
	}
	protected void v(){
		System.out.println("Protected v()");
	}
	private void w(){
		System.out.println("Private w()");
	}
}
public class HiddenC {
	public static A makeA(){
		return new C();
	}
}
