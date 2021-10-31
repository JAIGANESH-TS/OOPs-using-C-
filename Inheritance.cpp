/*Color Cube
In leisure time, teacher gave a six-color cube to the students. To arrange with the similar color on each side. Initially, she doesn't give any timing to finish. Day by day she decreases the timing to solve six color cube. Students were very interesting to solve those puzzles with colorful cubes. Students keep on practicing the cubes and solve it within 3 minutes. so she decided to give them the tough cubes. She knows only the side. She wants to calculate the side of the square so that she can make her own cubes. Can you help her to calculate the cube sides by the c++ program?
Input Format

Input consist no of sides

Output Format

Outputs consists of cube and square value of color cube.

Sample Input

Enter the side : 5

Sample Output

The square value is : 25

The cube value is : 125

Case 1
Case 2
Input (stdin)
5

Output (stdout)
Enter the side :
The square value is : 25
The cube value is : 125
solu:-*/
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
