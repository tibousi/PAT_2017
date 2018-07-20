package generics;

public class SimpleHolder<T> {
private T obj;
public void set(T obj){
	this.obj=obj;
}
public T get(){
	return obj;
}
public static void main(String[] args){
	SimpleHolder<String> holder=new SimpleHolder<String>();
	holder.set("Item");
	String s=holder.get();
}
}
