package pojo;

public class Golden_Dragon extends Motor_vehicle {
private int month;//∞¥‘¬Ω·À„
	public Golden_Dragon(String b, String c, double p,int month) {
		super(b, c, p);
		this.month=month;
		
	}

	@Override
		public double calc() {
		return super.getPrice()*month;
		}
}
