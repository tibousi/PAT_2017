package cx;

public class Cat extends Pet {
	private String strain;// Ʒ��

	public Cat(String n, String s) {
		super(n);// ��name���ݸ���Ĺ��췽��
		strain = s;
	}

	@Override
	public void eat() {
		System.out.println("è��ʳ��:" + "fish");
	}
}
