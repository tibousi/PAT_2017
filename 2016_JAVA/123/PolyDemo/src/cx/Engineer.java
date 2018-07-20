package cx;
//工程师类
public class Engineer extends Employee {
	private double bonus;//项目奖金
	public Engineer(String name,double salary,double bonus,int no) {
		super(name,salary,no);//调用父类的构造方法
	    this.bonus=bonus;
	}
	@Override
	protected double calc() {
		return super.getSalary()+bonus;
	}
	public double getBonus() {
		return bonus;
	}
	public void setBonus(double bonus) {
		this.bonus = bonus;
	}
	public void talk(){
	System.out.println("和技术大咖聊技术");	
	}
}
