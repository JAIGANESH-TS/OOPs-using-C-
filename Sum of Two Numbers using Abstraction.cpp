/*Sum of two numbers using abstraction
Write a program to find the sum of two numbers using abstraction in C++.


Case 1
Case 2
Case 3
Input (stdin)
5
6

Output (stdout)
Sum: 11
solu:-
*/
#include<iostream>
using namespace std;

class Sum{
  private:
  	int a,b;
  public:
  	Sum(){
      cin >> a >> b;
    }
  	void add(){
      cout << "Sum: " << a+b;
    }
};
int main()
{
  Sum s;
  s.add();
  return 0;
}
