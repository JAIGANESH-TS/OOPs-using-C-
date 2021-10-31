/*Area of NUT
Gany wants to fix the fan(Ceiling Fan) in his home, but he missed the BOLT. He needs to buy a new BOLT according to the NUT. He needs to calculate the area of NUT. Help him to find out the area of NUT. NOTE : NUT shape = polygon. (i.e) Rectangle + Triangle. Use the polymorphism concept and write the C++ program for the above problem.
Input Format :

Input consist of 2 integers.

First input represents the length of the Rectangle and base of the Triangle.

Second input represents the breadth of the rectangle and height of the Triangle.

Output Format :

Output consist of 2 integer. First output represents the area of rectangle. Second output represents area of triangle.

Sample Input:

10

10

Sample Output:

﻿100

50

Case 1
Case 2
Input (stdin)
5
5

Output (stdout)
25
12
solu:--*/
#include<iostream>
using namespace std;
int main()
{
	//type your code here;
  int a;
  int b;
  cin>>a>>b;
  cout<<a*b<<endl;
  cout<<(a*b)/2;
	return 0;
}
