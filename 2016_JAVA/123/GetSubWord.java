package cx;

public class GetSubWord {
	/**
	 * 4.String s = "113@ ere qqq yyui" 请输出所有子串 113 ere qqq Yyui
	 * 
	 * @param args
	 */
	public static void main(String[] args) {

		String s = "113@ ere qqq yyui";
        //使用空格替代@
		s = s.replaceAll("@", "");
        //使用空格切割字符串
		String [] ss=s.split(" ");
        //循环输出单个字符串
		for (int i = 0; i < ss.length; i++) {

		System.out.println(ss[i]);

		}

	}

}
