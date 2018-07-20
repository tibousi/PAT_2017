public abstract class SuperClass{
  abstract void display();
}
class SubClassA extends SuperClass{
  public void display(){
         System.out.println("SubClassA ");
  }
}
class SubClassB extends SuperClass{
  public void display(){
         System.out.println("SubClassB ");
  }
}
class PolyTester{
 public static void main(String[] args){
    SuperClass sa = new SubClassA();
    SuperClass  sb = new SubClassB();
    sa.display();
    sb.display();
    }
 }
