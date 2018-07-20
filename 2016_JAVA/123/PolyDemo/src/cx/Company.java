package cx;

import java.util.Scanner;

public class Company {
	//һ������ʦ��һ��������Ա
	//���������Ϊ�����Ĳ���
	public double check(Employee[] e){
	    int sum=0;
		for(int i=0;i<e.length;i++){
	    	sum+=e[i].calc();
	    }
		return sum;	
	}
	//���ݹ������ȥ���������Ĺ���
	//���������Ϊ�����ķ���ֵ
	public Employee guess(int no){
		Employee employee;
		
		if(no==1){
			System.out.println("������������ǹ���ʦ");
			employee=new Engineer("����ǿ", 4000, 5000, 15);
			
		}
		else if(no==2){
			System.out.println("�������������������Ա");
			employee=new SaleMans("����",1000,0.2,99);
		}
		else{
			System.out.println("�������������������Ա");
			employee=new Staff();
		}
		return employee;
	}
	//���ӻ����ķ���
    public void play(Employee e){
    	if(e instanceof Engineer){
    		//����ת��
    		((Engineer) e).talk();//һ������
    	}
    	else if(e instanceof SaleMans){
    		((SaleMans) e).drink();//һ��Ⱦ�
    	}
    	else{
    		((Staff)e).dump();
    	}
    }
	public static void main(String[] args) {
		Company company=new Company();
		Employee[] employees=new Employee[3];
		employees[0]=new Engineer("����",4000,10000,13);
		employees[1]=new SaleMans("����",1000,0.2,99);
		employees[2]=new Staff();
		System.out.println(company.check(employees));
		Scanner input=new Scanner(System.in);
		System.out.println("������Ա����");
		int no=input.nextInt();
		company.guess(no);
		//һ����ͬʱ�������˻���
		for(Employee e:employees){
		  company.play(e);
		}
		
	
}
}