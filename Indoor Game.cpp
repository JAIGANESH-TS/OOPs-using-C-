/*Indoor Game
Ajju has a Carom board and TT table (Table Tennis). Ree needs those games. She can get it if it gives the correct answer to the Ajju’s question. He asked an area of the carom board and TT table. Ree needs your help, Help her to get those games from Ajju. NOTE: Use the polymorphism concept and write the C++ program for the above problem.
Input Format :

Input consist of 3 integers.

First input represents the side of carrom

Second input represents length of TT table

Third input represents breadth of TT table.

Output Format :

Output consist of 2 integers.

First output represents the area of carrom.

Second output represents area of TT table.

Sample Input:

5

6

10

Sample Output:

25cm

60cm

Case 1
Case 2
Input (stdin)
3
15
34

Output (stdout)
9
510
solu:--*/
#include<iostream>
using namespace std;
int main()
{
	//type your code here;
  int a,b,c;
  cin>>a>>b>>c;
  cout<<a*a<<endl<<b*c;
	return 0;
}
