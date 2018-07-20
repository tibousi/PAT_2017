package pojo;


public class Motor_vehicle {
	private String brand;//车牌号
	private String color;//颜色
 	private double price;//单价
 	
 	public Motor_vehicle(String b,String c,double p){
 		brand=b;
 		color=c;
 		price=p;
 	}
    //计算的单价的方法
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
