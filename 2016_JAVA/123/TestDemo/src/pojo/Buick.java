package pojo;

//�������
public class Buick extends Motor_vehicle {
	private int week;// �����ڽ���

	public Buick(String b, String c, double p, int week) {
		super(b, c, p);
		this.week = week;
	}

	@Override
	public double calc() {
		return super.getPrice()*week;
	}
}
