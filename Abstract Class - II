/*Abstract class - II
Write a program to implement the concept of abstract class which contains constructors and constructor of an abstract class should be called when an instance of a derived class is created.
Read the input of type integer and print it as output.

Case 1
Case 2
Case 3
Input (stdin)
6

Output (stdout)
Base class constructor
Derived class constructor
The given input is 6
solu:-
*/
#include<iostream>
using namespace std;
class Base{
  private:
  	int n;
  public:
  	Base(){
      cin >> n;
      cout << "Base class constructor" << endl;
    }
  	int getValue(){
      return n;
    }
};

class Derived:public Base{
  public:
  	Derived(){
      cout << "Derived class constructor" << endl;
      cout << "The given input is " << getValue();
    }
};
int main()
{
  Derived d;
  return 0;
}
