package generics;
interface GenericGetter<T extends GenericGetter<T>>{
	T get();
}
interface Getter extends GenericGetter<Getter>{}
public class GenericsAndreturnTypes {
	void test(Getter g){
		Getter result=g.get();
		GenericGetter gg=g.get();
	}
}
