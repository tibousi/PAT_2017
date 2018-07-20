package cx;

public class HomeWork4 {

	/**
	 * 
	 * 4. 一个字符串 "aassswwcddooceffopiuuopueoczmmjhbvv" 
	 * 找出这个字符串中，最早出现，并且只出现一次的字符。
	 */

	public static void main(String[] args) {
		String s = "aassswwcddooceffopiuuopueoczmmjhbvv";
		int len = s.length();
		int[] pos = new int[256];//数组记录字符串当中字符的位置

		for (int i = 0; i < len; ++i) {
			char c = s.charAt(i);//获取字符串中所有字符
			pos[c]++;//统计每个字符出现的次数
		}
		char oneChar = ' ';
		int oneCharPos = -1;

		for (int i = 0; i < len; ++i) {
			char c = s.charAt(i);
			if (pos[c] == 1) {
				oneChar = s.charAt(i);
				oneCharPos = i;
				break;// 一旦查找次数为1，就跳出循环for
			}
		}

		System.out.println(oneChar + ":" + (oneCharPos + 1));

	}

}
