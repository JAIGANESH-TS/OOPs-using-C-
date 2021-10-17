/*Factorial number
Write C++ Program to find Factorial of a number using class.
Input Format:

Input consists of an integer

Output Format:

Output consists of an integer

Sample Input:

4

Sample Output:

24

Case 1
Case 2
Input (stdin)
7

Output (stdout)
5040
solu:-*/
#include<iostream>
using namespace std;
class Factorial{
  private:
  	int n;
  public:
  	Factorial(){
      cin >> n;
    }
  	int calculateFactorial(){
      int fact=1;
      while (n>1){
        fact*=n--;
      }
      return fact;
    }
};
int main()
{
	Factorial f;
  	cout << f.calculateFactorial();
	return 0;
}
