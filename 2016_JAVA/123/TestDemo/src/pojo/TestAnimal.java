package pojo;

public class TestAnimal {

	public static void main(String[] args) {
		Master master=new Master();
		//��������
		Animal[] animals=new Animal[2];
		Animal cat=new Cat();//����ת��
		Animal dog=new Dog();
		animals[0]=cat;
		animals[1]=dog;
		master.feed(animals);
		
		System.out.println(master.getAnimal(2));
		master.play(dog);
	}
}
