package cx;
//Ա����
public class Employee {
private String name;
private int no;//����
private double salary;//нˮ
public Employee() {
	
}
public Employee(String n,double s,int no) {
	name=n;
	salary=s;
	this.no=no;
}
//���㹤�ʵķ���
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
