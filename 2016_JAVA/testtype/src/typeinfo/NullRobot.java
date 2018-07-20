package typeinfo;
import java.util.*;
import net.mindview.util.*;
import java.lang.reflect.*;
class NullRobotProxyHandler implements InvocationHandler{
	private String nullName;
	private Robot proxied=new NRobot();
	NullRobotProxyHandler(Class<? extends Robot>type){
		nullName=type.getSimpleName()+" NullRobot";
	}
	private class NRobot implements Null,Robot{
		public String name(){
			return nullName;
		}
		public String model(){
			return nullName;
		}
		public List<Operation>operations(){
			return Collections.emptyList();
		}
	}
	public Object invoke(Object proxy, Method method, Object[] args)
			throws Throwable {
		return method.invoke(proxied, args);
	}
}
public class NullRobot {
	public static Robot newNullRobot(Class<?extends Robot >type){
		return(Robot)Proxy.newProxyInstance(NullRobot.class.getClassLoader(), 
				new Class[]{Null.class,Robot.class},
				new NullRobotProxyHandler(type));
	}
	public static void main(String[] args){
		Robot[] bots={new SnowRemoveRobot("SnowBee")
		,newNullRobot(SnowRemoveRobot.class)
		};
		for(Robot bot:bots)
			Robot.Test.test(bot);
	}
}
