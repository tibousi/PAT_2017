package typeinfo;
import typeinfo.factory.*;
import java.util.*;
class Part{
	public String toString(){
		return getClass().getSimpleName();
	}
	static List<Factory<?extends Part>>PartFactories=new ArrayList<Factory<? extends Part>>();
	static {
		PartFactories.add(new FuelFilter.Factory());
		PartFactories.add(new AirFilter.Factory());
		PartFactories.add(new CabinAirFilter.Factory());
		PartFactories.add(new OilFilter.Factory());
		PartFactories.add(new FanBelt.Factory());
		PartFactories.add(new GeneratorBelt.Factory());
		PartFactories.add(new PowerSteeringBelt.Factory());
	}
	private static Random rand=new Random(47);
	public static Part createRandom(){
	int n=rand.nextInt(PartFactories.size());
	return PartFactories.get(n).create();
}
}
class Filter extends Part{}
class FuelFilter extends Filter{
	public static class Factory implements typeinfo.factory.Factory<FuelFilter>{
		public FuelFilter create(){
			return new FuelFilter();
		}
	}
}
class AirFilter extends Filter{
	public static class Factory implements typeinfo.factory.Factory<AirFilter>{
		public AirFilter create(){
			return new AirFilter();
		}
	}
}
class CabinAirFilter extends Filter{
	public static class Factory implements typeinfo.factory.Factory<CabinAirFilter>{
		public CabinAirFilter create(){
			return new CabinAirFilter();
		}
	}
}
class OilFilter extends Filter{
	public static class Factory implements typeinfo.factory.Factory<OilFilter>{
		public OilFilter create(){
			return new OilFilter();
		}
	}
}
class Belt extends Part{}
class FanBelt extends Belt{
	public static class Factory implements typeinfo.factory.Factory<FanBelt>{
		public FanBelt create(){
			return new FanBelt();
		}
	}
}
class GeneratorBelt extends Belt{
	public static class Factory implements typeinfo.factory.Factory<GeneratorBelt>{
		public GeneratorBelt create(){
			return new GeneratorBelt();
		}
	}
}
class PowerSteeringBelt extends Belt{
	public static class Factory implements typeinfo.factory.Factory<PowerSteeringBelt>{
		public PowerSteeringBelt create(){
			return new PowerSteeringBelt();
		}
	}
}
public class RegisteredFactories {
	public static void main(String[] args){
		for(int i=0;i<10;i++)
			System.out.println(Part.createRandom());
	}
}
