package cx;

public class Dog extends Pet {
private String color;//颜色
public Dog(String n, String c) {
	super(n);// 把name传递父类的构造方法
	color = c;
}
	@Override
	public void eat() {
	  System.out.println("狗的食物："+"骨头");	
	}
}
