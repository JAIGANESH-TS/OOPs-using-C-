/*Birthday Gift
Ramu’s mom gifted X rupees to buy Mobile and Laptop for his birthday. Ramu’s dad gifted Y rupees to buy Mobile, Laptop, and Bike for his birthday. He thought to buy all the 3 things. Finally, his mom and dad need to know the total amount of gifts. Ramu is struggling to calculate the amount. Help him to find out the total amount of gifts. NOTE: Use the polymorphism concept and write the C++ program for the above problem.
Input Format :

Input consist of 3 integers.

First input represents the amount of Mobile

Second input represents the amount of Laptop

Third input represents the amount of Bike.

Output Format :

Output consist of 2 integers.

First output represents the total amount of Mom’s gift.

Second output represents the total amount of Dad’s gift.

Sample Input:

10000

25000

65000

Sample Output:

35000

100000

Case 1
Case 2
Input (stdin)
12500
3000
2830

Output (stdout)
15500
18330
solu:--*/
#include<iostream>
using namespace std;
int main()
{
	//type your code here;
    int a;
    int b;
  int c;
  cin>>a>>b>>c;
  cout<<a+b<<endl<<a+b+c;
	return 0;
}
