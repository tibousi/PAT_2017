import cx.Child;
import cx.Father;

public class Test {

	public static void main(String[] args) {
		//编译类型为Father
		Father father=new Father();
		Child child=new Child();
		//father指向child 运行时类型
		father=child;//多态运用之一
		father.print();//执行child的print
		((Child)father).study();
	}
}
