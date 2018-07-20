package list;
import java.util.*;
public class ArrayisNotIterable {
static <T> void test(Iterable<T> ib){
	for(T t:ib)
		System.out.print(t+" ");
}
public static void main(String[] args){
	test(Arrays.asList(1,2,3));
	String[] strings={"a","b","c"};
	test(Arrays.asList(strings));
}
}
