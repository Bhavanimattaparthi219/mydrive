class Parents {
public void showcase () {
System.out.println("I am Parent");
}
}
class Children extends Parents {
@Override
public void showcase () {
System.out.println("I am Children");
}
}
public class RunTimePolymorphism {
public static void main(String args[]) {
Parents superObject = new Parents();
superObject.showcase(); //method of super class or parent class is called
Parents subObject = new Children(); // upcasting
subObject.showcase();//method of sub class or child class is called by Parent reference, this is called "Run time Polymorphism"
Children subObject2 = new Children();
subObject2.showcase(); //method of sub class or child class is called
}
}