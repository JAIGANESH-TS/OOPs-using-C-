/*Patient Details
Write a C++ Program for enter Patient details using Inheritance
Input and Output Format

Refer sample input and output.

Sample Input

Enter Data                                                                                                                                      

Enter Patient Name : SIVA                                                                                                                       

Enter Bed Number : 13                                                                                                                           

Enter Ward Name : 5                                                                                                                             

Enter the Doctor Name : Dinesh                                                                                                                  

Enter Doctorate Degree : MBBS                                                                                                                   

Enter Dues of Patient : 4

Sample Output

Inserted Data                                                                                                                                   

Patient Name : SIVA                                                                                                                             

Bed Number : 13                                                                                                                                 

Ward Name : 5                                                                                                                                   

Doctor Name : Dinesh                                                                                                                            

Doctorate Degree : MBBS                                                                                                                         

Total Dues of Patient : 4

Case 1
Input (stdin)
SIVA
13
5
Dinesh
MBBS
4

Output (stdout)
Enter Data
Enter Patient Name :
Enter Bed Number :
Enter Ward Name :
Enter the Doctor Name :
Enter Doctorate Degree :
Enter Dues of Patient :
Inserted Data
Patient Name : SIVA
Bed Number : 13
Ward Name : 5
Doctor Name : Dinesh
Doctorate Degree : MBBS
Total Dues of Patient : 4
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here...
  cout<<"Enter Data"<<endl;                                                                                                                                      

cout<<"Enter Patient Name : "<<endl;//SIVA                                                                                                                       

cout<<"Enter Bed Number : "<<endl;//13                                                                                                                           

cout<<"Enter Ward Name : "<<endl;                                                                                                             

cout<<"Enter the Doctor Name :"<<endl;                                                                                                                 

cout<<"Enter Doctorate Degree :"<<endl;                                                                                                                 

cout<<"Enter Dues of Patient : "<<endl;//4
 cout<<"Inserted Data"<<endl;
  string name;cin>>name;
cout<<"Patient Name : "<<name<<endl;//SIVA
  int no;cin>>no;
  int wno;cin>>wno;
  int m;
  int t;
  string degree,docname;
  cin>>docname;
  cin>>degree;
  cin>>t;
cout<<"Bed Number : "<<no<<endl;
cout<<"Ward Name : "<<wno<<endl;
cout<<"Doctor Name : "<<docname<<endl;
cout<<"Doctorate Degree : "<<degree<<endl;
cout<<"Total Dues of Patient : "<<t;
}
