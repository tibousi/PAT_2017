package cx;
import java.util.Scanner;

public class Homework5 {

	/**
	 * 5.一个字符串，判断它是不是回文字符串。
	 * 即ab3ba是回文字符串 abcdcba是回文字符串  1fgh2hgf1 也是回文字符串。
	 */
	public static void main(String[] args) {
		String str = "";
		System.out.println("请输入一个字符串:");
		Scanner in = new Scanner(System.in);
		str = in.nextLine();
		// 根据字符串创建一个字符缓存类对象sb
		StringBuffer sb = new StringBuffer(str);
		// 将字符缓存中的内容倒置
		sb.reverse();
		// 计算出str与sb中对应位置字符相同的个数n
		int n = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str.charAt(i) == sb.charAt(i))
				n++;
		}
		// 如果所有字符都相等，即n的值等于str的长度，则str就是回文。
		if (n == str.length())
			System.out.println(str + "是回文!");
		else
			System.out.println(str + "不是回文!");
	}

}
