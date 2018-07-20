package cx;

public class SplitString {
	/**
	 * String s=”name=zhangsan age=18 classNo=090728”;
	 * 	 * 将上面的字符串拆分，结果如下:
	 * 	 * zhangsan 18 090728
	 * 	 * @param args
	 */
	public static void main(String[] args) {
		
		String s="name=zhangsan age=18 classNo=090728";
        //空格分割字符串
		String[] ss = s.split(" ");
        //定义Stringbuffer类
		StringBuffer sb =new StringBuffer();
		for (int i = 0; i < ss.length; i++) {
        //再次使用=分割字符串
		String[] ss2 =ss[i].split("=");
		sb.append(ss2[1]);
		sb.append(" ");

		}
		System.out.println(sb);

	}

}
