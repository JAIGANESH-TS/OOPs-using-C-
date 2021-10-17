/*Bank
Niranjan goes to the bank for depositing money in his friend account. And he is having the certain details to deposit. After depositing the opponent withdrawn certain amount. But the opponent is unable to find the balance in his account. Help him to find the balance amount in his account by creating a class using c++.
Input Format:

Input consists of strings and integers. First input consists of account number. Second input consists of name. Third consists of type of your account. Fourth consists of the balance. Fifth consists of deposit amount and last consists of your withdraw amount.

Output Format:

Output consists of all the details which we given in the input. And display the balance after withdrawn your amount.

Sample Input:

5346

Jeshua

Savings

50000

6000

5000

Sample Output:

Enter Details: 

Accout No. 

Name : 

Account Type :

Balance :

Enter Deposit Amount =

Enter Withdraw Amount =

Accout No. : 5346

Name : jeshua

Account Type : savings

Balance : 51000

Case 1
Case 2
Input (stdin)
5346
Jeshua
Savings
50000
6000
5000

Output (stdout)
Enter Details:
Account No.
Name :
Account Type :
Balance :
Enter Deposit Amount =
Enter Withdraw Amount =
Accout No. : 5346
Name : Jeshua
Account Type : Savings
Balance : 51000
solu:-*/
#include<iostream>
using namespace std;
class Bank{
  private:
  int acno, bal;
  string name, type;
  public:
  void getDetails(){
    cout << "Enter Details:" << endl;
    cout << "Account No." << endl;
    cin >> acno;
    cout << "Name :" << endl;
    cin >> name;
    cout << "Account Type :" << endl;
    cin >> type;
    cout << "Balance :" << endl;
    cin >> bal;
  }
  void deposit(){
    int dep;
    cout << "Enter Deposit Amount =" << endl;
    cin >> dep;
    bal+=dep;
  }
  void withdraw(){
    int with;
    cout << "Enter Withdraw Amount =" << endl;
    cin >> with;
     bal-=with;
    if (with>bal){
      cout << "Cannot Withdraw Amount" << endl;
    }
   
  }
  void printDetails(){
    cout << "Accout No. : " << acno << endl;
    cout << "Name : " << name << endl;
    cout << "Account Type : " << type << endl;
    cout << "Balance : " << bal << endl;
  }
  
};
int main()
{
  Bank b;
  b.getDetails();  
  b.deposit();
  b.withdraw();
  b.printDetails();
}
