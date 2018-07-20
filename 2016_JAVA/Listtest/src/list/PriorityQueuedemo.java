package list;
import java.util.*;
public class PriorityQueuedemo {
public static void main(String[] args){
	PriorityQueue<Integer>priorityqueue=new PriorityQueue<Integer>();
	Random rand=new Random(47);
	for(int i=0;i<10;i++)
		priorityqueue.offer(rand.nextInt(i+10));
	QueueDemo.printQ(priorityqueue);
	List<Integer>ints=Arrays.asList(25,22,20,18,14,9,3,1,1,2,3,9,14,18,21,23,25);
	priorityqueue=new PriorityQueue<Integer>(ints);
	QueueDemo.printQ(priorityqueue);
	priorityqueue=new PriorityQueue<Integer>(ints.size(),Collections.reverseOrder());
	priorityqueue.addAll(ints);
	QueueDemo.printQ(priorityqueue);
	
	String fact="EDUCATION SHOULD ESCHEW OBFUSCATION";
	List<String>strings=Arrays.asList(fact.split(""));
	PriorityQueue<String>stringPQ=new PriorityQueue<String>(strings);
	QueueDemo.printQ(stringPQ);
	stringPQ=new PriorityQueue<String>(strings.size(),Collections.reverseOrder());
	stringPQ.addAll(strings);
	QueueDemo.printQ(stringPQ);
	Set<Character>charset=new HashSet<Character>();
	for(char c:fact.toCharArray())
		charset.add(c);
	PriorityQueue<Character>characterPQ=new PriorityQueue<Character>(charset);
	QueueDemo.printQ(characterPQ);
}
}
