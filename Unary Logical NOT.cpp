/*Unary Logical NOT
Write a C++ program for unary logical NOT (!) operator overloading
Input and Output Format

Refer sample input and output

Sample Input

50

Sample Output

Before calling Operator Overloading:value of n is: 50

After calling Operator Overloading:value of n is: 0

Case 1
Case 2
Input (stdin)
50

Output (stdout)
Before calling Operator Overloading:value of n is: 50
After  calling Operator Overloading:value of n is: 0
solu:-*/
#include<iostream>
using namespace std;
int main()
{
   //Type your code here..
  int n;
  cin>>n;
  cout<<"Before calling Operator Overloading:value of n is: "<<n<<endl;
  n=!n;
  cout<<"After  calling Operator Overloading:value of n is: "<<n;
}
