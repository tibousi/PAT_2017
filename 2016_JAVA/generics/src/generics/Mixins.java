package generics;
import java.util.*;
interface TimeStamped{
	long getStamp();
}
class TimeStampedImp implements TimeStamped{
	private final long timeStamp;
	public TimeStampedImp(){
		timeStamp=new Date().getTime();
	}
	public long getStamp(){
		return timeStamp;
	}
}
interface SerialNumbered{
	long getSerialNumber();
}
class SerialNumberedImp implements SerialNumbered{
	private static long counter=1;
	private final long serialNumber=counter++;
	public long getSerialNumber(){
		return serialNumber;
	}
}
interface Basic{
	public void set(String val);
	public String get();
}
class BasicImp implements Basic{
public String value;
	@Override
	public void set(String val) {
		// TODO Auto-generated method stub
		value=val;
	}

	@Override
	public String get() {
		// TODO Auto-generated method stub
		return value;
	}
	
}
class Mixin extends BasicImp implements TimeStamped,SerialNumbered{
private TimeStamped timeStamped=new TimeStampedImp();
private SerialNumbered serialNumber=new SerialNumberedImp();
	@Override
	public long getSerialNumber() {
		// TODO Auto-generated method stub
		return serialNumber.getSerialNumber();
	}

	@Override
	public long getStamp() {
		// TODO Auto-generated method stub
		return timeStamped.getStamp();
	}
	
}
public class Mixins {
public static void main(String[] args){
	Mixin mixin1=new Mixin(),mixin2=new Mixin();
	mixin1.set("test string1");
	mixin2.set("test string2");
	System.out.println(mixin1.get()+" "+mixin1.getStamp()+" "+mixin1.getSerialNumber());
	System.out.println(mixin2.get()+" "+mixin2.getStamp()+" "+mixin2.getSerialNumber());
}
}
