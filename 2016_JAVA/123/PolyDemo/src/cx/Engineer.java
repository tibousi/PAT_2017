package cx;
//����ʦ��
public class Engineer extends Employee {
	private double bonus;//��Ŀ����
	public Engineer(String name,double salary,double bonus,int no) {
		super(name,salary,no);//���ø���Ĺ��췽��
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
	System.out.println("�ͼ������ļ���");	
	}
}
