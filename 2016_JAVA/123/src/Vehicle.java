interface Vehicle {
Object start();
Object stop();
}
class Bike implements Vehicle{


	public Object start() {
System.out.println("Bike Start");
		return null;
	}
	public Object stop() {
		return null;
	}
	
}
class Bus implements Vehicle{


	public Object start() {

		return null;
	}
	public Object stop() {
		return null;
	}
	
}
class interfaceDemo{
	public static void main(String args[])
	{
		Bike b1=new Bike();
		Bus b2=new Bus();
		b1.start();
		b1.stop();
		b2.start();
		b2.stop();
	}
}
