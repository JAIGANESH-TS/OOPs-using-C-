/*Perfect Number
Write a program to check whether the number is a perfect or not using abstraction
Read the input of type integer

If it is a perfect number, print "Yes " else "No"

Case 1
Case 2
Case 3
Input (stdin)
5

Output (stdout)
No
solu:-
*/
#include<iostream>
using namespace std;

class PerfectNum{
  private:
  	int n;
  public:
  	PerfectNum(){
      cin >> n;
    }
  	void isPerfect(){
      int sum=1, i=2;
      while (i*i<=n){
        if (n%i==0){
          sum+=i;
          int t=n/i;
          if (t!=i)
            sum+=t;
        }
        i++;
      }
      cout << ((sum==n)?"Yes":"No");
    }
};
int main()
{
  PerfectNum pn;
  pn.isPerfect();
  return 0;
}
