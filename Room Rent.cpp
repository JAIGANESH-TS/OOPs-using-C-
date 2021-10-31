/*Room Rent
There were two friends staying in the paid guest. The hostel rules and regulations were too strict. They feel the hostel food was not tasty. so, they decided to cook on their own. In the hostel, they won't allow them to cook food. They need to know, whether they can manage the rent allowance with their salary. So, they started to note the expenses for two months, which they were spending for their personal use. In order to know how much amount they need to save. After the long discussion Ram and Sathish took separate houses with _Rs rent. They started to cook their favorite foods at home. Days passed by routine life. The owner of the house suddenly increased the rent amount by _Rs. They were in the need of extra money to pay the rent amount to the owner. They need to calculate the amount to arrange which is remaining from their salary.
Input Format

First line consist of total amount of Rent

Second and third line consist of Remaining amount from Ram and sathish salary.

Output Format

They need to calculate the amount to arrange which is remaining from their salary.

Sample Input

The total amount of the rent : 5500

Remaining money from Ram's salary: 2200

Remaining money from Sathish's salary: 1500

Sample Output

To pay the rent amount they need to arrange : 1800Rs

Case 1
Case 2
Input (stdin)
5500
2200
1500

Output (stdout)
The total amount of the rent is :
Remaining money from Ram's salary:
Remaining money from Sathish's salary:
To pay the rent amount they need to arrange : 1800Rs
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  int a;
  int b;
  int c;
  cin>>a>>b>>c;
  cout<<"The total amount of the rent is :"<<endl;
  cout<<"Remaining money from Ram's salary:"<<endl;
  cout<<"Remaining money from Sathish's salary:"<<endl;
  cout<<"To pay the rent amount they need to arrange : ";
  cout<<a-(b+c)<<"Rs"<<endl;
}
