package pojo;


public class Master {
	
	
	/*public void feed(Dog dog){
		dog.eat();
	}
    public void feed(Cat cat){
    	cat.eat();
    }*/
	//����������Ϊ�����Ĳ���
	public void feed(Animal[] animal){
		for(int i=0;i<animal.length;i++){
			animal[i].eat();	
		}
	
	 	
	}
	
	//ʵ����������Ĺ���
	public Animal getAnimal(int typeId){
		Animal animal=null;
		switch (typeId) {
		case 1:
		animal= new Dog();
			break;
		case 2:
		animal=new Cat();
		default:
			break;
		}
		return animal;
	}
	//instance of��������Լ��ĳ�������Ƿ�����ĳ������
	public void play(Animal animal){
		if(animal instanceof Cat){
			Cat cat=(Cat) animal;
			cat.dump();
		}
		else if(animal instanceof Dog){
			Dog dog=(Dog) animal;
			dog.playBall();
		}
		
	}
}
