/*MNC company
In an MNC company, the employee need to be get promoted for highest position. But they need to qualify the certain process which we need to search their name and to sort out them by salaries. Help them to sort out the list of employees for the promotion by creating class and objects in C++.
Input Format:

Input consists of strings and integers. First input consists of your id. Second input consists of your name and last input consists of your salary.

Output Format:

Output consists of display all the records which you given as input.

Sample Input:

2

1

12

Jethro

20000

11

Jeshua 

15000

2

3

4

Sample Output:

Enter No. of Records You Want : 

 1. Accept Data 

 2. Display Data 

 3. Sort Data by Name 

 4. Exit: 

 Enter Your Choice : 

 Enter Data for Employee 1

 Enter Staff Id : 

 Enter Staff Name : 

 Enter Salary : 

 Enter Data for Employee 2

 Enter Staff Id : 

 Enter Staff Name : 

 Enter Salary : 

 1. Accept Data 

 2. Display Data 

 3. Sort Data by Name 

 4. Exit: 

 Enter Your Choice : 

 Staff Id : 12

 Name : Jethro

 Salary : 20000

 Staff Id : 11

 Name : Jeshua

 Salary : 15000

 1. Accept Data 

 2. Display Data 

 3. Sort Data by Name 

 4. Exit: 

 Enter Your Choice :

 Data is Sorted!!!

 1. Accept Data 

 2. Display Data 

 3. Sort Data by Name 

 4. Exit: 

 Enter Your Choice : 

Case 1
Case 2
Input (stdin)
2
1
12
Jethro
20000
11
Jeshua 
15000
2
3
4

Output (stdout)
Enter No.of Records You Want :
1. Accept Data
2. Display Data
3. Sort Data by Name
4. Exit:
Enter Your Choice :
Enter Data for Employee 1
Enter Staff Id :
Enter Staff Name :
Enter Salary :
Enter Data for Employee 2
Enter Staff Id :
Enter Staff Name :
Enter Salary :
1. Accept Data
2. Display Data
3. Sort Data by Name
4. Exit:
Enter Your Choice :
Staff Id : 12
Name : Jethro
Salary : 20000

Staff Id : 11
Name : Jeshua
Salary : 15000

1. Accept Data
2. Display Data
3. Sort Data by Name
4. Exit:
Enter Your Choice :
Data is Sorted!!!

1. Accept Data
2. Display Data
3. Sort Data by Name
4. Exit:
Enter Your Choice :
solu:-*/
#include<iostream>
using namespace std;
class Employee{
  public:
    int id;
    string name;
    int salary;
};
int main()
{
  cout << "Enter No.of Records You Want :" << endl;
  int n;
  cin >> n;
  Employee emp[n];
  int i=0,t;
  while(true){
    cout << "1. Accept Data" << endl;
    cout << "2. Display Data" << endl;
    cout << "3. Sort Data by Name" << endl;
    cout << "4. Exit:" << endl;
    cout << "Enter Your Choice :" << endl;
    cin >> t;
    if (t==1){
      for(int i=0;i<n;i++){
        cout << "Enter Data for Employee " << i+1 << endl;
        cout << "Enter Staff Id :" << endl;
        cin >> emp[i].id;
        cout << "Enter Staff Name :" << endl;
        cin >> emp[i].name;
        cout << "Enter Salary :" << endl;
        cin >> emp[i].salary;
      }
    }
    else if(t==2){
      for(int j=0;j<n;j++){
        cout << "Staff Id : " << emp[j].id << endl;
        cout << "Name : " << emp[j].name << endl;
        cout << "Salary : " << emp[j].salary << endl << endl;
      }
    }
    else if (t==3){
      for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n-j-1;k++){
          if (emp[j].name>emp[k].name){
            Employee temp=emp[j];
            emp[j]=emp[k];
            emp[k]=temp;
          }
        }
      }
      cout << "Data is Sorted!!!" << endl << endl;
    }
    else
      break;
  }
  
}
