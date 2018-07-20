package pojo;

//别克商务
public class Buick extends Motor_vehicle {
	private int week;// 按星期结算

	public Buick(String b, String c, double p, int week) {
		super(b, c, p);
		this.week = week;
	}

	@Override
	public double calc() {
		return super.getPrice()*week;
	}
}
