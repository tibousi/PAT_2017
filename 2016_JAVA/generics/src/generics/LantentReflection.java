package generics;
import java.lang.reflect.*;
import static net.mindview.util.Print.*;
class Mime{
	public void walkAgainstTheWind(){}
	public void sit(){print("Prstending to sit");}
	public void pushInvisibleWalls(){}
	public String toString(){
		return  "Mime";
	}
}
class SmartDog{
	public void speak(){
		print("Woof!");
	}
	public void sit(){
		print("sitting!");
	}
	public void reproduce(){}
}
class CommunicateReflectively{
	public static void perform(Object speaker){
		//∑¥…‰£¨Method,invoke,
		Class<?>spkr=speaker.getClass();
		try{
			try{
				Method speak=spkr.getMethod("speak");
				speak.invoke(speaker);
			}catch(NoSuchMethodException e){
				print(speaker+" cannot speak");
			}
			try{
				Method sit=spkr.getMethod("sit");
				sit.invoke(speaker);
			}catch(NoSuchMethodException e){
				print(speaker+" cannot sit");
			}
		}catch(Exception e){
			throw new RuntimeException(speaker.toString(),e);
		}
	}
}
public class LantentReflection {
	public static void main(String[] args){
		CommunicateReflectively.perform(new SmartDog());
		CommunicateReflectively.perform(new Robots());
		CommunicateReflectively.perform(new Mime());
	}
}
