package generics;

class CommunicateSimply{
	static void perform(Performs performer){
		performer.sit();
		performer.speak();
	}
}
public class SimpleDogsAndRobots {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		CommunicateSimply.perform(new Dogs());
		CommunicateSimply.perform(new Robots());
	}

}
