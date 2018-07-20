package generics;
class Base{}
class Dervird extends Base{}
interface OrdinaryGetter{
	Base get();
}
interface DerivedGetter extends OrdinaryGetter{
	Dervird get();
}
public class CovariantReturnTypes {
	void test(DerivedGetter d){
		Dervird d2=d.get();
	}
}
