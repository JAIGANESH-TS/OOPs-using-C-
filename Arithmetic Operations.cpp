/*Arithmetic operations
Write a c++ program to implement arithmetic operations by creating a class and objects.
Input Format:

Input consists of 8 integers.

First input consists of an integer and second consists of integer, representing the inputs of addition operation.

Third input consists of an integer and fourth consists of integer, representing the inputs of subtract operation.

Fifth input consists of an integer and sixth consists of integer, representing the inputs of multiplication operation.

Seventh input consists of an integer and eighth consists of integer, representing the inputs of division operation.

Output Format:

Output consists of 4 integers which is based on the arithmetic operators.

Sample Input:

5

2

6

3

9

6

5

3

Sample Output:

7

3

54

1

Case 1
Case 2
Input (stdin)
5
2
6
3
9
6
5
3

Output (stdout)
7
3
54
1
solu:-*/
#include<iostream>
using namespace std;

class Calculator{
  public:
  	void printValues(){
      add();
      sub();
      multiply();
      divide();
    }
  private:
  	void add(){
      int a,b;
      cin >> a >> b;
      cout << a+b << endl;
    }
  	void sub(){
      int a,b;
      cin >> a >> b;
      cout << a-b << endl;
    }
  	void multiply(){
      int a,b;
      cin >> a >> b;
      cout << a*b << endl;
    }
  	void divide(){
      int a,b;
      cin >> a >> b;
      cout << a/b;
    }
};

int main()
{
  Calculator calc;
  calc.printValues();
}
