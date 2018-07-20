package pojo;

public class BMW extends Motor_vehicle {
	private int day;// 按天计算费用

	public BMW(String b, String c, double p, int day) {
		super(b, c, p);
		this.day = day;

	}

	@Override
	public double calc() {

		return super.getPrice() * day;
	}
}
