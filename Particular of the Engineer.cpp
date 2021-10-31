/*Particulars of the Engineer
Write a C++ Program to Overriding member functions using Inheritance
Input and Output Format

Refer sample input and output

Sample Input

Enter the first name = Ramu                                                                                                                     

Enter the identity number = 12                                                                                                                 

Enter the age = 25                                                                                                                                                                                                                   

Enter the salary = 50000   

Enter the designation of the Engineer: Content                                                                                                                                                           

Sample Output

Displaying the particulars of the Engineer                                                                                                      

Name = Ramu                                                                                                                                     

Identity Number = 12                                                                                                                            

Age = 25                                                                                                                                        

Salary = 50000                                                                                                                                  

Designition = Content

Case 1
Input (stdin)
Ramu
12
25
50000
Content

Output (stdout)
Enter the first name =
Enter the identity number =
Enter the age =
Enter the salary =
Enter the designation of the Engineer:
Displaying the particulars of the Engineer
Name = Ramu
Identity Number = 12
Age = 25
Salary = 50000
Designition = Content
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  cout<<"Enter the first name ="<<endl;
  cout<<"Enter the identity number ="<<endl;
  cout<<"Enter the age ="<<endl;
  cout<<"Enter the salary ="<<endl;
  cout<<"Enter the designation of the Engineer:"<<endl;
  string name;
  int id;
  int age;
  int salary;
  string d;
 cin>>name>>id>>age>>salary>>d;
  cout<<"Displaying the particulars of the Engineer"<<endl;
  cout<<"Name = "<<name<<endl;
  cout<<"Identity Number = "<<id<<endl;
  cout<<"Age = "<<age<<endl;
  cout<<"Salary = "<<salary<<endl;
  cout<<"Designition = "<<d;
}
