package cx;

public class ModifyWord {
	/**
	 * 编写程序将String类型字符串”test” 变为 “tset”
	 * 
	 * @param args
	 */
	public static void main(String[] args) {

		String s = "test";
		//第一种方式
		s=s.replace("es", "se");
		System.out.println(s);
        //第二种方式
		/*StringBuffer sb = new StringBuffer(s);
		sb.reverse();
		s = sb.toString();
		System.out.println(s);*/
	}

}
