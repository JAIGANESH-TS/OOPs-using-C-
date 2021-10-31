/*Unary (++) and (--)
Write a C++ program for unary increment (++) and decrement (--) operator overloading
Input and Output Format

Refer sample input and output

Sample Input

49

Sample Output                                                                                                                                              

After increment - value of n is: 50                                                                                                             

After decrement - value of n is: 49

Case 1
Case 2
Input (stdin)
23

Output (stdout)
After increment - value of n is: 24
After decrement - value of n is: 23
solu:--*/
#include<iostream>
using namespace std;
int main()
{
   //Type your code here..
  int a;
  cin>>a;
  cout<<"After increment - value of n is: "<<++a<<endl;
  cout<<"After decrement - value of n is: "<<--a;
}
