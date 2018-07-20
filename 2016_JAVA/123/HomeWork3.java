package cx;

public class HomeWork3 {

	/**
	 * 3. 有一句英文，"as well as other constants and methods" 
       1.计算这句话有多少个单词(每个单词是以空格区分)
       2.输出字母最长的那个单词
	 */
	public static void main(String[] args) {
		String string="as well as other constants and methods";
		String[]s=string.split(" ");
		System.out.println(s.length);
		int max=s[0].length();//设定第一个字符为最长的
		String temp = null;
		for(int i=0;i<s.length;i++){
			if(max<s[i].length()){
				max=s[i].length();//找出最长的是第几个元素
			    temp=s[i];
			}
		}
        System.out.println(temp);
	}

}
