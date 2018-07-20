package cx;
//销售人类
public class SaleMans extends Employee {

	private double brokerage;//提成
	public SaleMans(String name,double salary,double brokerage,int no) {
		super(name,salary,no);//调用父类的构造方法
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
		System.out.println("跟销售人员拼酒");
	}
}
