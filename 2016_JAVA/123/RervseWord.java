package cx;

public class RervseWord {
	/**
	 * 编写一个程序，将下面的一段文本中的各个单词的字母顺序翻转，
	 * 
	 * “To be or not to be"，将变成"oT eb ro ton ot eb."。
	 * 
	 * @param args
	 */
	public static void main(String[] args) {

		String s = "To be or not to be";
        //通过空格切割字符串
		String ss[] = s.split(" ");
		StringBuffer sb2 = new StringBuffer();
		for (int i = 0; i < ss.length; i++) {
             //把分割之后的字符串存放到stringbuffer中
			StringBuffer sb = new StringBuffer(ss[i]);
            //字符串反转
			sb.reverse();
            //把反转之后的字符串存放到新的Stringbuffer中
			sb2.append(sb);
     		if (i == ss.length - 1) {
				sb2.append(".");//最后一位加.
			} else {
               //新组成的字符串用空格隔开
				sb2.append(" ");

			}

		}

		System.out.println(sb2);

	}

}
