/*Odd or Even
Write a C++ program to find given no is odd or even using class. If the number is odd print "ODD", else print "EVEN"
Input Format:

Input consists of an integer

Output Format:

Check whether the given input is odd or even

Sample Input:

14

Sample Output:

EVEN

Case 1
Case 2
Input (stdin)
123

Output (stdout)
ODD
solu:-*/
#include <iostream>
using namespace std;

class Number{
  private:
  int n;
  public: 
  void set(int n){
    this->n=n;
  }
  string OddOrEven(){
    return ((n%2==0)?"EVEN":"ODD");
  }
};
int main() 
{
  int n;
  cin >> n;
  Number num;
  num.set(n);
  cout << num.OddOrEven();
  return 0;
}
