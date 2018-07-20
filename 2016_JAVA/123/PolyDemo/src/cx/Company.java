package cx;

import java.util.Scanner;

public class Company {
	//一个工程师和一个销售人员
	//父类对象作为方法的参数
	public double check(Employee[] e){
	    int sum=0;
		for(int i=0;i<e.length;i++){
	    	sum+=e[i].calc();
	    }
		return sum;	
	}
	//根据工号类别去测试真正的工种
	//父类对象作为方法的返回值
	public Employee guess(int no){
		Employee employee;
		
		if(no==1){
			System.out.println("猜中了吗，身份是工程师");
			employee=new Engineer("赖俊强", 4000, 5000, 15);
			
		}
		else if(no==2){
			System.out.println("猜中了吗，身份是销售人员");
			employee=new SaleMans("李四",1000,0.2,99);
		}
		else{
			System.out.println("猜中了吗，身份是行政人员");
			employee=new Staff();
		}
		return employee;
	}
	//增加互动的方法
    public void play(Employee e){
    	if(e instanceof Engineer){
    		//向下转型
    		((Engineer) e).talk();//一起聊天
    	}
    	else if(e instanceof SaleMans){
    		((SaleMans) e).drink();//一起喝酒
    	}
    	else{
    		((Staff)e).dump();
    	}
    }
	public static void main(String[] args) {
		Company company=new Company();
		Employee[] employees=new Employee[3];
		employees[0]=new Engineer("罗仙",4000,10000,13);
		employees[1]=new SaleMans("李四",1000,0.2,99);
		employees[2]=new Staff();
		System.out.println(company.check(employees));
		Scanner input=new Scanner(System.in);
		System.out.println("请输入员工号");
		int no=input.nextInt();
		company.guess(no);
		//一个人同时和三种人互动
		for(Employee e:employees){
		  company.play(e);
		}
		
	
}
}