package pojo;

public class Dog extends Animal {
	private String strain;
	/*public void eat(){
		System.out.println("�Թ���");
	}
*/
	//������д
	@Override
	public void eat() {
		
		System.out.println("�Թ���");
	}
	@Override
	public String toString() {
		return "Dog [strain=" + strain + "]";
	}
	public void playBall(){
		System.out.println("����");
	}
}

