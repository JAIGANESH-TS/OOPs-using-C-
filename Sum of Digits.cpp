/*Sum of digit
Write a C++ program to find the sum of digits of a number using class.
Input Format:

Input consists of a integer

Output Format:

Output consists of a integer

Sample Input:

5467

Sample Output:

22

Case 1
Case 2
Input (stdin)
1896

Output (stdout)
24
solu:-*/
#include<iostream>
using namespace std;

class Number{
  private:
  int n,sum=0;
  public:
  void set(int n){
    this->n=n;
  }
  int getSum(){
    while (n>0){
      sum+=n%10;
      n/=10;
    }
    return sum;
  }
};
int main()
{
  Number s;
  int n;
  cin >> n;
  s.set(n);
  cout << s.getSum();
  return 0;
}
