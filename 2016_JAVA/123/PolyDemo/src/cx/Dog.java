package cx;

public class Dog extends Pet {
private String color;//��ɫ
public Dog(String n, String c) {
	super(n);// ��name���ݸ���Ĺ��췽��
	color = c;
}
	@Override
	public void eat() {
	  System.out.println("����ʳ�"+"��ͷ");	
	}
}
