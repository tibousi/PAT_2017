package pojo;


public class Motor_vehicle {
	private String brand;//���ƺ�
	private String color;//��ɫ
 	private double price;//����
 	
 	public Motor_vehicle(String b,String c,double p){
 		brand=b;
 		color=c;
 		price=p;
 	}
    //����ĵ��۵ķ���
 	public double calc(){
 		return price;
 	}
	public String getBrand() {
		return brand;
	}
	public void setBrand(String brand) {
		this.brand = brand;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
    

}
