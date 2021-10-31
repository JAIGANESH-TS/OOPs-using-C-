/*Bank Account
Define a class to represent a bank account. Include the following members: Data members: 1) Name of the depositor 2) Account number 3) Type of account 4) Balance amount in the account. Member functions: 1) To assign initial values 2) To deposit an amount 3) To withdraw an amount after checking the balance 4) To display name and balance. Write a C++ program to print the details of bank account.
Input and Output Format

Refer sample Input and Output

Sample Input

Enter Details:                                                                                                                                  

Accout No: 1234                                                                                                                                 

Name: Raj                                                                                                                                                                                                                      

Account Type: Saving                                                                                                                                                                          

Balance: 50000                

Enter Deposit Amount = 14000                                                                                                                                                                                          

Enter Withdraw Amount = 49000

Sample Output                                                                                                                          

Accout No: 1234                                                             

Name: Raj                                                                                                                                       

Account Type: Saving                                                                                                                            

Balance: 15000

Case 1
Case 2
Input (stdin)
1234
Raj
Saving
50000
14000
49000

Output (stdout)
Enter Details:
Accout No:
Name:
Account Type:
Balance:
Enter Deposit Amount =
Enter Withdraw Amount =
Accout No: 1234
Name: Raj
Account Type: Saving
Balance: 15000
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  int no;
  string name;
  string type;
  int bal;
  int dep;
  int with;
  cout<<"Enter Details:"<<endl;
  cout<<"Accout No:"<<endl;
  cout<<"Name:"<<endl;
  cout<<"Account Type:"<<endl;
  cout<<"Balance:"<<endl;
  cout<<"Enter Deposit Amount = "<<endl;
  cout<<"Enter Withdraw Amount = "<<endl;
  cin>>no>>name>>type>>bal>>dep>>with;
  if(type=="Saving")
  {
    bal+=dep;
    bal-=with;
  }
  else
  {
    bal+=dep;
    bal-=with;
  }
  if(bal<0)
    cout<<"Cannot Withdraw Amount"<<endl;
  cout<<"Accout No: "<<no<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Account Type: "<<type<<endl;
  cout<<"Balance: "<<bal;
}
