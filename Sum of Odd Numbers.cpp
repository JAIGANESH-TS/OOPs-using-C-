/*Sum of odd numbers
Write a C++ Program to find the Sum of odd numbers between 1 and n range using class
Input Format:

Input consists of an integer

Output Format:

Output consists of an integer

Sample Input:

129

Sample Output:

4225

Case 1
Case 2
Input (stdin)
100

Output (stdout)
2500
solu:-*/
#include<iostream>
using namespace std;

class Odd{
  private:
  	int n,sum=0;
  public:
  	void set(int n){
      this->n=n;
    }
  	int getSum(){
      for(int i=1;i<=n;i+=2){
        sum+=i;
      }
      return sum;
    }
};
int main()
{
  Odd odd;
  int n;
  cin >> n;
  odd.set(n);
  cout << odd.getSum();
  return 0;
}
