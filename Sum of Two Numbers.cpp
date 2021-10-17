/*Sum of Two numbers
Write a C++ program to Add two numbers by using multiple inheritance
Input and Output Format

Refer sample input and output

Sample Input

Enter the integer value of class A: 12

Enter the integer value of class B: 3

Sample Output

The sum of two numbers: 15

Case 1
Case 2
Input (stdin)
12
3

Output (stdout)
Enter the integer value of class A:
Enter the integer value of class B:
The sum of two numbers: 15
solu:-*/
#include<iostream>
using namespace std;

class A{
  private:
  int a;
  public:
  void setA(){
    cout << "Enter the integer value of class A: \n";
    cin >> a;
  }
  int getA(){
    return a;
  }
};

class B{
  private:
  int b;
  public:
  void setB(){
    cout << "Enter the integer value of class B: \n";
    cin >> b;
  }
  int getB(){
    return b;
  }
};

class C:public A,public B{
  private:
  int c;
  public:
  void sum(){
    cout << "The sum of two numbers: " << getA()+getB();
  }
};
int main()
{
  C obj;
  obj.setA();
  obj.setB();
  obj.sum();
}
