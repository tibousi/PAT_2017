package pojo;

public class TestMoto {
	
	public static void main(String[] args) {
		//�������鳤��Ϊ3��������
		Motor_vehicle[]motor_vehicles=new Motor_vehicle[3];
		motor_vehicles[0]=new BMW("��A66665", "��ɫ", 600, 7);
		motor_vehicles[1]=new Buick("��B88888", "��ɫ", 3000, 2);
		motor_vehicles[2]=new Golden_Dragon("��C77777", "��ɫ", 8800, 2);
	   System.out.println("�����Ϊ��"+rent(motor_vehicles));	
		
	}
	//���޵ķ���
	public static double rent(Motor_vehicle[]  motor_vehicle){
		double sum=0;
		for(int i=0;i<motor_vehicle.length;i++){
			sum+=motor_vehicle[i].calc();
			
		}
		return sum;
	}

}
