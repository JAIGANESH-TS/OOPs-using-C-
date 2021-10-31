/*Employee Information
C++ program to read and print employee information using multiple inheritance.
Sample Input

Enter employee's basic info:                                                                                                                    

Enter Name: Raju                                                                                                                                

Enter Emp. Id: 23                                                                                                                               

Enter Gender: M                                                                                                                                 

Enter employee's department info:                                                                                                               

Enter Department Name: Product Development                                                                                                      

Enter assigned work: PPT WORk                                                                                                                   

Enter time in hours to complete work: 24

Sample Output:

Employee's Information is:                                                                                                                      

Basic Information...:                                                                                                                           

Name: Raju                                                                                                                                      

Employee ID: 23                                                                                                                                 

Gender: M                                                                                                                                       

                                                                                                                                                

Department Information...:                                                                                                                      

Department Name: Product Development                                                                                                            

Assigned Work: PPT WORk                                                                                                                         

Time to complete work: 24

Case 1
Input (stdin)
Raju
23
M
Product Development
PPT WORK
24

Output (stdout)
Enter employee's basic info:
Enter Name: Enter Emp. Id: Enter Gender: Enter employee's department info:
Enter Department Name: Enter assigned work: Enter time in hours to complete work: Employee's Information is:
Basic Information...:
Name: Raju
Employee ID: 23
Gender: M

Department Information...:
Department Name: Product Development
Assigned Work: PPT WORK
Time to complete work: 24
solu:--*/
#include <iostream>
#include <stdio.h>
using namespace std;

class BasicInfo{
  protected:
  	char name[20], gender[2];
  	int id;
  public:
  	BasicInfo(){
      cout << "Enter employee's basic info: " << endl;
      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter Emp. Id: ";
      cin >> id;
      cout << "Enter Gender: ";
      cin >> gender;
    }
};
class DepartmentInfo{
  protected:
  	char dept[20], work[20];
  	int time;
  public:
  	DepartmentInfo(){
      cout << "Enter employee's department info:" << endl;
      cout << "Enter Department Name: ";
      scanf("\n%[^\n]\n",dept);
      cout << "Enter assigned work: ";
      cin.getline(work,20);
      cout << "Enter time in hours to complete work: ";
      cin >> time;
    }
};

class Employee: private BasicInfo, private DepartmentInfo{
  public:
  	Employee(){
      cout << "Employee's Information is:" << endl;
      cout << "Basic Information...:" << endl;
      cout << "Name: " << name << endl;
      cout << "Employee ID: " << id << endl;
      cout << "Gender: " << gender << endl << endl;
      cout << "Department Information...:" << endl;
      cout << "Department Name: " << dept << endl;
      cout << "Assigned Work: " << work << endl;
      cout << "Time to complete work: " << time;
    }
};
int main(){
  Employee emp;
}
