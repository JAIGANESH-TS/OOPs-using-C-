/*Square and Cube
Write a C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number
Input Format

First and Second lines consist of Integer values.

Output Format

Refer sample output format

Sample Input:

Enter an integer number: 23

Enter an integer number: 89

Sample Output:

Square of 23 is: 529

Cube  of 89 is: 704969

Case 1
Case 2
Input (stdin)
23
89

Output (stdout)
Enter an integer number: Square of 23 is: 529
Enter an integer number: Cube of 89 is: 704969
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  int a;
  int b;
  cin>>a>>b;
  cout<<"Enter an integer number: Square of "<<a<<" is: "<<a*a<<endl;
  cout<<"Enter an integer number: Cube of "<<b<<" is: "<<b*b*b<<endl;
  //cout<<b*b*b;
}
