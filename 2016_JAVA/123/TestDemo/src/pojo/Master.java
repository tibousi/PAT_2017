package pojo;


public class Master {
	
	
	/*public void feed(Dog dog){
		dog.eat();
	}
    public void feed(Cat cat){
    	cat.eat();
    }*/
	//父类类型作为方法的参数
	public void feed(Animal[] animal){
		for(int i=0;i<animal.length;i++){
			animal[i].eat();	
		}
	
	 	
	}
	
	//实现领养宠物的功能
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
	//instance of运算符可以检测某个对象是否属于某个类型
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
