package testException;

public class OnOffSwitch {
private static Switch sw=new Switch();
public static void f() throws OnOffException1,OnOffException2{
	throw new RuntimeException("RunEX");
}
public static void main(String[] args){
	try{
		sw.on();
		f();
		sw.off();
	}catch(OnOffException1 e){
		System.out.println("OnOffException1");
		sw.off();
	}catch(OnOffException2 e){
		System.out.println("OnOffException2");
		sw.off();
	}
	catch(RuntimeException e){
		e.printStackTrace(System.out);
	}
}
}
