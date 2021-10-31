/*Grade
The principal of the college wants to know who got the highest marks this semester. He has to appreciate the students and also wants to offer a free course to that student. The topmost company HR person will conduct the course. He or she can improve technical skills through this course. The duration of the free course is about 3months. In this way, he wants to bring all other students to get the highest marks. The class teachers of each and every class discussed and submit the student's detail to the principal in the paper. Unfortunately, he missed the paper so he needs to automate the process. Can you help him to find the student's details by developing the code in the c++ program.
Input Format

First line consist of student name.

second line consist of student age.

third line consist of student gender.

fourth line consist of student total marks and fifth line consist of student grade.

Output Format

First line consist of student name.

second line consist of student age.

third line consist of student gender.

fourth line consist of student total marks

fifth line consist of student percentage and sixth line consist of student grade.

Sample Input

Enter student's basic information:                                                                                                              

Name: Kohli                                                                                                                                     

Age: 24                                                                                                                                        

Gender: M                                                                                                                                                                                                                     

Enter student's result information:                                                                                                             

Total Marks : 480                                                                                                                               

Grade: A        

Sample Output

Name: kohli

Age: 24

Gender: M

Total Marks: 480

Percentage: 96

Grade: A

Case 1
Case 2
Input (stdin)
Kohli
24
M
480
A

Output (stdout)
Enter student's basic information:
Name:
Age:
Gender:

Enter student's result information:
Total Marks:
Grade:
Name: Kohli
Age: 24
Gender: M
Total Marks: 480
Percentage: 96
Grade: A
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  string s;
  cin>>s;
  int a;
  cin>>a;
  char ch;
  cin>>ch;
  int m;
  cin>>m;
  char g;
  cin>>g;
  cout<<"Enter student's basic information:"<<endl;
cout<<"Name:"<<endl;
cout<<"Age:"<<endl;
cout<<"Gender:"<<endl<<endl;
 cout<<"Enter student's result information:"<<endl;
cout<<"Total Marks: "<<endl;
cout<<"Grade:"<<endl;
cout<<"Name: "<<s<<endl;
cout<<"Age: "<<a<<endl;
cout<<"Gender: "<<ch<<endl;
cout<<"Total Marks: "<<m<<endl;
cout<<"Percentage: "<<(m*100)/500<<endl;
cout<<"Grade: "<<g;
}
