package cx;

public class Master {
	
	public void feed(Pet[] p){
		for(int i=0;i<p.length;i++){
			p[i].eat();
		}
	}

	public static void main(String[] args) {
		Master master=new Master();
		Pet[]p=new Pet[2];
		p[0]=new Cat("����", "�ӷ�è");
		p[1]=new Dog("����", "��ɫ");
		master.feed(p);
	}
}
