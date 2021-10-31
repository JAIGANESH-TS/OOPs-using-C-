/*MNC company
Sofia is working in a MNC company .She was allocated a work of preparing question paper for the interview process of her company. While she was preparing for aptitude MCQ question ,she don’t have that much time to find answers for the questions by solving it. So help her to find the answers by writing a program to find all the possible ways of division by two numbers .
Input and Output Format

Two integer input (numerator & denominator)

Output as float or Division by zero or Division is less than 1

Sample Input

Enter two numbers: 8 5

Sample Output

a/b = 1.6

Case 1
Case 2
Input (stdin)
8
5

Output (stdout)
Enter two numbers:
a/b = 1.6
solu:-*/
#include<iostream>
using namespace std;
int main()
{
  cout << "Enter two numbers: " << endl;
  float a,b;
  cin >> a >> b;
  try{
    if (b==0)
      throw "Exception: Division by zero";
    float r=a/b;
    if (r<1)
      throw "Exception: Division is less than 1";
    cout << "a/b = " << r;
  }
  catch(const char *s){
    cout << s;
  }
}
