package typeinfo;
import java.util.*;
public class SnowRemoveRobot implements Robot{
	private String name;
	public SnowRemoveRobot(String name){
		this.name=name;
	}
	public String name(){
		return name;
	}
	public String model(){
		return "SnowBot Series 1l";
	}
	public List<Operation> operations(){
		return Arrays.asList(new Operation(){
			public String description(){
				return name+" can shovel snow";
			}
			public void command(){
				System.out.println(name+" shoveling snow");
			}
		},
		new Operation(){
			public String description(){
				return name+" can chip ice";
			}
			public void command(){
				System.out.println(name+" can chip ice");
			}
		},
		new Operation(){
			public String description(){
				return name+" can clear the roof";
			}
			public void command(){
				System.out.println(name+" can clear the roof");
			}
		}
		);
	}
	public static void main(String[] args){
		Robot.Test.test(new SnowRemoveRobot("Slusher"));
	}
}
