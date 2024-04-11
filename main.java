import java.util.Scanner; 
class Employee {
    int employeeId; 
    String name;
    
    public static void main(String[] args) { 
        Employee s1 = new Employee(); 
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter Employee Id:");
        s1.employeeId = in.nextInt(); 
        in.nextLine(); 
        
        System.out.println("Enter Employee Name:");
        s1.name = in.nextLine(); 
        
        System.out.println("Employee Id: " + s1.employeeId); 
        System.out.println("Employee Name: " + s1.name); 
    }
}
