/*Exception Handling
Ravi wants to do some arithmetic operations for his grocery store. He was planning to do addition, subtraction, multiplication, and division in a fast way so that he can reduce the time for calculation. Ravi wants to get two inputs as integer and to do the operation.

If anyone of the input is zero it should print as "Bad Operation", if he enters any numbers or character instead of operators it should display that "It is not a Valid Operator" and if the entered values are the correct form it has to display the answer. Help Ravi to handle this situation by writing code. 

Input Format:

The first and third input corresponds the following formats int , float, and double,etc...

The second input corresponds to the operator

Output Format:

Refer sample Output for formatting.

Sample Input 1:

0

Sample Output 1:

Bad Operation

Sample Input 2:

5

f

Sample Output 2:

It is not Valid Operator

Sample Input 3:

5

+

5

Sample Output 3:

5 + 5 = 10


Case 1
Case 2
Input (stdin)
4
l

Output (stdout)
It is not a Valid Operator
solu:--*/
#include <iostream>
using namespace std;

int main() 
{
   // Try out your code here
  int a;
  cin>>a;
  char b;
  cin>>b;
  if(a==0)
    cout<<"Bad Operation";
  else if(b=='+' || b=='-' || b=='*' || b=='/')
  {
    int c;
    cin>>c;
    if(c==0)
      cout<<"Bad Operation";
    else{
    cout<<a<<" "<<b<<" "<<c<<" = ";
    if(b=='+')
      cout<<a+c;
    if(b=='-')
      cout<<a-c;
    if(b=='*')
      cout<<a*c;
    if(b=='/')
      cout<<a/c;
  }}
  else
     cout<<"It is not a Valid Operator";
    //cout << "Hello, World!";

    return 0;
}
