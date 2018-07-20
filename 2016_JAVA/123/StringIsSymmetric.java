package cx;

public class StringIsSymmetric {
	/**
	 * 1、判断一个字符串是否是对称字符串， 
	 * 例如"abc"不是对称字符串，"aba"、"abba"、"aaa"、"mnanm"是对称字符串
	 * 
	 * @param args
	 */
	public static void main(String[] args) {

		String s = "asdffdsa";

		 isOk1(s);//方法一
         //方法二
         if (isOk2(s)==true) {
                     System.out.println("真，对称！");
             }else{
                     System.out.println("假，不对称！");
             }
	}
	
	 /**
     * 判断字符串是否对称的方法（一）
     * 通过取取索引对应值来进行一一比对
     * @param str
     */
    public static void  isOk1(String str){
            boolean result = true;
            int count =(str.length()-1)/2;
            for (int x=0;x<=count;x++ ){
                    if(str.charAt(x)!=str.charAt(str.length()-1-x)){
                            result = false;
                            break;
                    }
            }
            if(!result)
                    System.out.println("该字符串是不对称的");
            else
                    System.out.println("该字符串是对称的");
    }
    /**
     * 方法二
     * 通过String加强类中的取反方法reverse获取其逆向值
     * 再与原字符串相比是否相等！
     * 等于则返回TRUE,否则FALSE
     * @param str
     * @return
     */
    public static boolean isOk2(String str){
            StringBuffer sb = new StringBuffer(str);
            String str2 = sb.reverse().toString();
            return str.equals(str2);
    }
}
