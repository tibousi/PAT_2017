package cx;

public class Cat extends Pet {
	private String strain;// 品种

	public Cat(String n, String s) {
		super(n);// 把name传递父类的构造方法
		strain = s;
	}

	@Override
	public void eat() {
		System.out.println("猫的食物:" + "fish");
	}
}
