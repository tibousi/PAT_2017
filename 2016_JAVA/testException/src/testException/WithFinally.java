package testException;

public class WithFinally {
static Switch sw=new Switch();
public static void main(String[] args){
	try{
		sw.on();
		OnOffSwitch.f();
	}catch(OnOffException1 e){
		System.out.println("1");
	}catch(OnOffException2 e) {
		System.out.println("2");
	}
	finally{
		sw.off();
	}
}
}
