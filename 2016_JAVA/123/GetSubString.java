package cx;

public class GetSubString {
	/**
	 * 1.编写程序将 “jdk” 全部变为大写,并输出到屏幕,
	 * 截取子串”DK” 并输出到屏幕
	 * @param args
	 */
	public static void main(String[] args) {
		String s = "jdk";
		//使用链式调用
	    System.out.println(s.toUpperCase().substring(1,3));	
		
	}
 
}
