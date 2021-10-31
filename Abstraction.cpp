/*Abstraction
Write a program to implement the concept of Abstraction in C++.
Read the input of type integer and print it as output.

Case 1
Case 2
Case 3
Input (stdin)
5
19

Output (stdout)
a = 5
b = 19
solu:-
*/
#include<iostream>
using namespace std;
class A
{
  int a,b;
  public:
  A()
  {
    cin>>a>>b;
  }
  void print()
  {
    cout<<"a = "<<a<<endl<<"b = "<<b;
  }
};
int main()
{
  //Type your code here
  A a;
  a.print();
  return 0;
}
