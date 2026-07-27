import java.util.Objects;

public class Employee{
  public int id;
  public String name;
  public int age;
  public String address;

  public Employee(){
    
  }

  public Employee(int id, String name, int age, String address){
    this.id = id;
    this.name = name;
    this.age = age;
    this.address = address;
  }

  public static void run(){
    Employee emp1 = new Employee(1, "A R", 25, "Darbhanga, Bihar");
    Employee emp2 = new Employee(1, "A R Danish", 25, "Darbhanga, Bihar");
    System.out.println(emp1.equals(emp2)); // false without hash function
    System.out.println(emp1.equals(emp2)); // true with hash function
  }

  //Override
  public boolean equals(Object obj){
    if (this == obj) return true;
    if (obj == null) return false;

    if (getClass() != obj.getClass()) return false;

    Employee emp = (Employee) obj;

    return id == emp.id; // if id must be unique
    return id == emp.id && name == emp.name; // if id can be same but name must be unique
    // add any other condition as required
  }

  // @override
  public int hashCode(){
    return Objects.hash(id);
  }
}
