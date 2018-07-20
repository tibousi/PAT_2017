package pojo;

public class TestMoto {
	
	public static void main(String[] args) {
		//定义数组长度为3对象数组
		Motor_vehicle[]motor_vehicles=new Motor_vehicle[3];
		motor_vehicles[0]=new BMW("赣A66665", "黑色", 600, 7);
		motor_vehicles[1]=new Buick("赣B88888", "灰色", 3000, 2);
		motor_vehicles[2]=new Golden_Dragon("赣C77777", "白色", 8800, 2);
	   System.out.println("总租金为："+rent(motor_vehicles));	
		
	}
	//租赁的方法
	public static double rent(Motor_vehicle[]  motor_vehicle){
		double sum=0;
		for(int i=0;i<motor_vehicle.length;i++){
			sum+=motor_vehicle[i].calc();
			
		}
		return sum;
	}

}
