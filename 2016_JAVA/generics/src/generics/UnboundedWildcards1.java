package generics;
import java.util.*;
public class UnboundedWildcards1 {
static List list1;
static List<?>list2;
static List<? extends Object>list3;
static void assing1(List list){
	list1=list;
	list2=list;
	list3=list;
}
static void assing2(List list){
	list1=list;
	list2=list;
	list3=list;
}
static void assing3(List list){
	list1=list;
	list2=list;
	list3=list;
}
public static void main(String[] args){
	assing1(new ArrayList());
	assing2(new ArrayList());
	assing3(new ArrayList());
}
}
