package pojo;

public class Cat extends Animal {
	private String color;
	/*public void eat(){
		System.out.println("����");
	}*/
	//������д
    @Override
    public void eat() {
    	System.out.println("����");
    }
	@Override
	public String toString() {
		return "Cat [color=" + color + "]";
	}
    
	public void dump(){
		System.out.println("èϲ����");
	}
}
