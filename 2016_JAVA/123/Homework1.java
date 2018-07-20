package cx;
public class Homework1 {

	/**
	 * 1. 创建字符串str=”IhLeOllVoEwJorAlVdA”。 AdVlAroJwEoVllOeLhI
	 * 1)创新两个新的字符串newstr1和newstr2，
	 *  将str中的大写字母按顺序放到newstr1中，
	 * 小写字母按顺序放到newstr2中，组成两个新的字符串。
	 * 2)将newstr1中的大写字母全部转换为小写字母并输出，
	 * newstr2中的小写字母全都转换成大写字母并输出。 
	 * 3)将str倒叙输出。
	 */
	public static void main(String[] args) {
		String str = "IhLeOllVoEwJorAlVdA";
		String newstr1 = " ";
		String newstr2 = " ";
		// charAt(int index)取出对应下标的字符
		for (int i = 0; i < str.length(); i++) {
			char word = str.charAt(i);//获取单个字符
			if (word >= 'A' && word <= 'Z') {
				newstr1 = newstr1 + word;
			} else if (word >= 'a' && word <= 'z') {
				newstr2 = newstr2 + word;
			}
		}
		System.out.println(newstr1.toLowerCase());
		System.out.println(newstr2.toUpperCase());
		// 3逆序输出
		char[] words = str.toCharArray();
		for (int i = words.length - 1; i >= 0; i--) {
			System.out.print(words[i]);
		}
	}

}
