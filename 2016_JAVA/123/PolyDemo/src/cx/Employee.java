package cx;
//员工类
public class Employee {
private String name;
private int no;//工号
private double salary;//薪水
public Employee() {
	
}
public Employee(String n,double s,int no) {
	name=n;
	salary=s;
	this.no=no;
}
//计算工资的方法
protected double calc(){
	return salary;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public int getNo() {
	return no;
}
public void setNo(int no) {
	this.no = no;
}
public double getSalary() {
	return salary;
}
public void setSalary(double salary) {
	this.salary = salary;
}
	
}
