/*Positive
Theodore is a digitializing the marks of the examination held for government recruitment. He is continuously entering the marks obtained in the papers. He has to enter only the marks with positive score.If theodore enters the negative mark it has show the exception and if it is a positive score nothing has to be displayed.Help him with the exception handling code to find the exception.
Input and Output Format

Refer sample input and output

Sample Input

-5

Sample Output

Exception Caught as -5

Case 1
Case 2
Input (stdin)
-5

Output (stdout)
Exception Caught as -5
solu:-*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  try{
    cin >> n;
    if (n<0)
      throw n;
  }
  catch(int x){
    cout << "Exception Caught as " << x;
  }
}
