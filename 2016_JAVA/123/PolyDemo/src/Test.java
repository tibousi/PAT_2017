import cx.Child;
import cx.Father;

public class Test {

	public static void main(String[] args) {
		//��������ΪFather
		Father father=new Father();
		Child child=new Child();
		//fatherָ��child ����ʱ����
		father=child;//��̬����֮һ
		father.print();//ִ��child��print
		((Child)father).study();
	}
}
