/*Arun has a pool table(8 ball-pool table) and it is rectangular in shape. The pocket of the pool table is a circle shape. Arun wants to calculate the perimeter of the pool table and the perimeter of its pocket. Help him to find out.
Note: Use pure virtual function.

Create a class with the name Shape.

Create two methods named Enter_data() and Perimeter() as pure virtual function.

Create a class with the name Rectangle and inherited from a class Shape.

The class needs two fields with the name length and breadth of type float.

Method named Enter_data() without any parameter, it needs to get the value of length and breadth.

Method named Perimeter() without any parameter, it needs to calculate the perimeter of rectangle.

Create a class with the name Circle and inherited from a class Shape.

The class needs one field with the name radius of type float.

Method named Enter_data() without any parameter, it needs to get the value of radius field.

Method named Perimeter() without any parameter, it needs to calculate the perimeter of circle.

Input Format :

Input consist of 3 integers.

First input represents the length of pool table

Second input represents breadth of pool table

Third input represents radius of the table pocket.

Output Format :

Output consist of 1 integer 1 float.

First output represents the perimeter of pool table.

Second output represents perimeter of pool table’s pocket .

Sample Input:

74

30

17

Sample Output:

Perimeter of rectangle: 208

Perimeter of circle: 106.76

Case 1
Case 2
Input (stdin)
3
4
5

Output (stdout)
Perimeter of rectangle: 14
Perimeter of circle: 31.4
solu:--*/
import java.util.*;
import java.io.*;
public class Main
{
  public static void main(String args[])
  {
    //Try out your code here
    Scanner in=new Scanner(System.in);
    int a=in.nextInt();
    int b=in.nextInt();
    int c=in.nextInt();
    System.out.println("Perimeter of rectangle: "+2*(a+b));
    System.out.print("Perimeter of circle: ");
    double val=2*3.14*c;
    String v=""+val;
    int index=v.indexOf('.');
    System.out.print(v.substring(0,index+1));
    String km=v.substring(index+1);
    index=km.indexOf('0');
    if(index<0)
      index=km.length();
    System.out.println(km.substring(0,index));
  //  System.out.println(v);
  }
}
