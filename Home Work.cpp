/*Home Work
Ella is doing her Mathematics home work .Her Maths Teacher given a set of 10 questions to solve. She found the answers for many questions, but she can't able to find the solution for dividing the number by Zero. Help Ella to find answer for the question by Exception Handling.
Input and Output Format:

Two integer input (numerator & denominator)

Output as integer or Division by zero Exception

Sample Input

50

0

Sample Output

Division by zero Exception

Case 1
Case 2
Input (stdin)
50
0

Output (stdout)
Division by zero Exception
solu:-*/
#include<iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  try{
    if (b==0)
      throw a;
    cout << a/b;
  }
  catch(int x){
    cout << "Division by zero Exception";
  }
}
