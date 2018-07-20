package generics;
class GenericSetter<T>{
	void set(T arg){
		System.out.println("GegericSetter.set(Base)");
	}
}
class DerivedGS extends GenericSetter<Base>{
	void set(Dervird dervird){
		System.out.println("DerivedGs.set(Base)");
	}
}
public class PlainGenericInheritance {
public static void main(String[] args){
	Base base=new Base();
	DerivedGS dgs=new DerivedGS();
	Dervird derived=new Dervird();
	dgs.set(derived);
	dgs.set(base);
}
}
