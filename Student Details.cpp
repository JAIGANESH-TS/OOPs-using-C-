/*Jai and Bala once went to a college. The students of that college where doing a software in which when you enter an id number and student name it should display the entered details. Both are studying c++ so they wanted to solve this problem using class and object.
Input Format:

Input consists of two integers and one string. First input consists of the name. Second input consists of the roll number. Third input consists of marks.

Output Format:

Output consists of three integers and one string. First output name followed by the roll number and marks and percentage.

Sample Input:

Jai

12

458

Sample Output:

Enter the name :

Enter roll number :

Enter total marks out of 500:

Student details:

Name:Jai

Roll Number:12

Total:458

Percentage:91.6
SOl:-*/
#include<iostream>
using namespace std;
class Student{
  public:
  char name[50];
  int rollno,marks;
  Student(){
    cout << "Enter name:" << endl;
    cin >> name;
    cout << "Enter roll number:" << endl;
    cin >> rollno;
    cout << "Enter total marks outof 500:" << endl;
    cin >> marks;
  }
};
int main()
{
  //Type your code here...
  Student s1;
  cout << "Student details:" << endl;
  cout << "Name: " << s1.name << endl;
  cout << "Roll Number: " << s1.rollno << endl;
  cout << "Total: " << s1.marks << endl;
  cout << "Percentage: " << s1.marks*100.0/500;
}
