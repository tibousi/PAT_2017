package generics;
class OrdinarySetter{
	void set(Base base){
		System.out.println("OrdinarySetter.set(Base)");
	}
}
class DerivedSetter extends OrdinarySetter{
	void set(Dervird derived){
		System.out.println("DervirdSetter.set(Derived)");
	}
}
public class OrdinaryArguments{
	public static void main(String[] args){
		Base base=new Base();
		Dervird dervird=new Dervird();
		DerivedSetter ds=new DerivedSetter();
		ds.set(dervird);
		ds.set(base);
	}
}

