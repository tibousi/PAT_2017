package net.mindview.util;
import java.util.*;
public class CountingMapData extends AbstractMap<Integer,String>{
private int size;
private static String[] chars="A B C D E F G H I J K L M N O P Q R S T U V W X Y Z".split(" ");
public CountingMapData(int size){
	this.size=this.size<0?0:size;
}
private static class Entry implements Map.Entry<Integer,String>{
	int index;
	Entry(int index){this.index=index;}
	public boolean equals(Object o){
		return Integer.valueOf(index).equals(o);
	}
	@Override
	public Integer getKey() {
		// TODO Auto-generated method stub
		return index;
	}
	@Override
	public String getValue() {
		// TODO Auto-generated method stub
		return chars[index%chars.length]+Integer.toString(index/chars.length);
	}
	@Override
	public String setValue(String value) {
		// TODO Auto-generated method stub
		throw new UnsupportedOperationException();
	}
	public int hashcode(){
		return Integer.valueOf(index).hashCode();
	}
}
	@Override
	public Set<java.util.Map.Entry<Integer, String>> entrySet() {
		Set<Map.Entry<Integer,String>>entries=new LinkedHashSet<Map.Entry<Integer,String>>();
		for(int i=0;i<size;i++)
			entries.add(new Entry(i));
		return entries;
	}
	public static void main(String[] args){
		System.out.println(new CountingMapData(60));
	}

}
