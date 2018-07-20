package generics;
import static net.mindview.util.Print.*;
class Dogs implements Performs{
	public void speak(){
		print("wolf!");
	}
	public void sit(){
		print("Dog sitting!");
	}
	public void reproduce(){}
}
class Robots implements Performs{

	@Override
	public void speak() {
		// TODO Auto-generated method stub
		print("Click!");
		
	}

	@Override
	public void sit() {
		// TODO Auto-generated method stub
		print("Robot sitting!");
	}
	public void oilChange(){}
}
class Communicate{
	public static<T extends Performs>void perform(T performer){
		performer.speak();
		performer.sit();
	}
}
public class DogAndRobots {
	public static void main(String[] args){
	Dogs d=new Dogs();
	Robots r=new Robots();
	Communicate.perform(d);
	Communicate.perform(r);
}
}
