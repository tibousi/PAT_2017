package cx;
//��������
public class SaleMans extends Employee {

	private double brokerage;//���
	public SaleMans(String name,double salary,double brokerage,int no) {
		super(name,salary,no);//���ø���Ĺ��췽��
	    this.brokerage=brokerage;
	}
	@Override
	protected double calc() {
		return super.getSalary()+10000*brokerage;
	}

	public double getBrokerage() {
		return brokerage;
	}

	public void setBrokerage(double brokerage) {
		this.brokerage = brokerage;
	}
	public void drink(){
		System.out.println("��������Աƴ��");
	}
}
