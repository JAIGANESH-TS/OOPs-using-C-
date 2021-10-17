/*Prime Number
Write aC++ program to fine a given no is prime or not using class and object. If the number is prime print"Prime" else, print "Not Prime".
Input Format:

Input consists of an integer

Output Format:

Refer sample output

Sample Input:

13

Sample Output:

Prime

Case 1
Case 2
Input (stdin)
12

Output (stdout)
Not Prime
solu:-*/
#include<iostream>
using namespace std;

class Number{
  private:
  int n;
  public:
  void set(int n){
    this->n=n;
  }
  bool isPrime(){
    if (n<=1)
      return false;
    if (n<=3)
      return true;
    if (n%2==0 || n%3==0)
      return false;
    int i=5;
    while(i*i<=n){
      if (n%i==0 || n%(i+2)==0)
        return false;
      i+=6;
    }
    return true;
  }
};
int main()
{
  int n;
  cin >> n;
  Number num;
  num.set(n);
  cout << (num.isPrime()?"Prime":"Not Prime");
  return 0;
}
