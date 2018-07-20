package typeinfo;
interface Interface{
	void doSomething();
	void somethingsElse(String arg);
}
class RealObject implements Interface{
	public void doSomething(){
		System.out.println("doSomething");
	}
	public void somethingsElse(String arg){
		System.out.println("somethingElse"+arg);
	}
}
class SimpleProxy implements Interface{
	private Interface proxied;
	public SimpleProxy(Interface proxied){
		this.proxied=proxied;
	}
	public void doSomething(){
		System.out.println("SimpeProxy doSomething");
		proxied.doSomething();
	}
	public void somethingsElse(String arg){
		System.out.println("SimpleProxy somethingElse"+arg);
		proxied.somethingsElse(arg);
	}
}
class SimpleProxyDemo {
	public static void consumer(Interface iface){
		iface.doSomething();
		iface.somethingsElse("bonobo");
	}
	public static void main(String[] args){
		consumer(new RealObject());
		consumer(new SimpleProxy(new RealObject()));
	}
}
