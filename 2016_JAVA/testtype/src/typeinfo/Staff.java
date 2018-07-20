package typeinfo;
import java.util.*;
public class Staff extends ArrayList<Position>{
	public void add(String title,Person person){
		add(new Position(title,person));
	}
	public void add(String... titles){
		for(String title:titles){
			add(new Position(title));
		}
	}
	public Staff(String... titles){
		add(titles);
	}
	public boolean positionAvailable(String title){
		for(Position position:this)
			if(position.getTitle().equals(title)&&position.getPerson()==Person.Null)
				{return true;}
			return false;
	}
	public void fillPosition(String title,Person hire){
		for(Position position:this)
			if(position.getTitle().equals(title)&&position.getPerson()==Person.Null)
			{
				position.setPerson(hire);
				return;
			}
		
	}
	public static void main(String[] args){
		Staff staff=new Staff("President","CTO","Marketing Manager","Product Manager","Project Lead",
				"Sofeware manager","Software Engineer","Software Engineer","Software Engineer",
				"Software Engineer","Test Engineer","Technical Wariter");
		staff.fillPosition("President", new Person("Me","Last","The Top,Lonely At"));
		staff.fillPosition("Project Lead",new Person("Janet","Planner","The Burbs"));
		if(staff.positionAvailable("Software Engineer"))
			staff.fillPosition("Sotfware Engineer",new Person("Bob","Coder","Bringht Light City"));
		System.out.println(staff);
	}
}
