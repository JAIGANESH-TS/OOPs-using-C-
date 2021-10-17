/*Electricity Bill
Write a C++ Program to Calculate the Electricity Bill. If the unit is less than or equal to 100, the cost of a unit is Rs.1.20 If the unit is less than or equal to 300, the cost of the first 100 units remains the same. For remaining units, the cost of a unit is Rs.2. If the unit is greater than or equal to 300, the first 100 and 200 units remain the same. For remaining units, the cost of a unit is Rs.3
Input Format:

The first line of the input corresponds the bill number

The second line of the input corresponds to the name

The third line of the input corresponds to the consuming units

Output Format:

Refer sample output

Sample Input:

40

Sai

290

Sample Output:

500

Explanation:

Here the unit consuming is 290

The first 100 units the cost is Rs. 1.20. Remaining 190 units cost is Rs. 2

(100 * 1.20 = 120, 190 * 2 = 380

380 + 120 = 500)

Case 1
Case 2
Input (stdin)
15
Siva
70

Output (stdout)
15
Siva
70
84
solu:-*/
#include<iostream>
using namespace std;

class Electricity{
  private:
  	int no, cons;
  	string name;
  public:
  	Electricity(){
      cin >> no >> name >> cons;
    }
  	float calculateBill(){
      cout << no << endl;
      cout << name << endl;
      cout << cons << endl;
      float amount=0;
      if (cons>=300){
        return 1.2*100+2*(cons-100)+3*(cons-200);
      }
      if (cons<=100){
        return 1.2*cons;
      }
      if (cons<=200){
        return 1.2*100+2*(cons-100);
      }
    }
};
int main()
{
	Electricity elec;
  	cout << elec.calculateBill();
	return 0;
}
