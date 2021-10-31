/*Instructor
Write a C++ Program to print employee details using hybrid inheritance
Input and Output Format

Refer sample input and output.

Sample Input

Enter No. of Instructor Details You Want :  1                                                                                                                                                                   

Enter Id  :  1234                                                                                                                 

Enter Name :  Ram                                                                                                                       

Enter Subject Name :  Maths                                                                                                                                                                  

Enter Teacher Name :  Surya                                                                             

Enter Department Name :  EEE                                                                                                                    

Sample Output                                                                                                                                        

Id :  1234                                                                                                                                      

Name :  Ram                                                                                                                                     

Subject Name  :  Maths                                                                                                                          

Teacher Name  :  Surya                                                                                                                          

Department Name :  EEE

Case 1
Case 2
Input (stdin)
1
1234
Ram
Maths
Surya
EEE

Output (stdout)
Enter No. of Instructor Details You Want :
Enter Id  :
Enter Name :
Enter Subject Name :
Enter Teacher Name :
Enter Department Name :
Id :  1234
Name :  Ram
Subject Name  :  Maths
Teacher Name  :  Surya
Department Name :  EEE
solu:--*/
#include<iostream>
using namespace std;
class Details
{
  public:
  int id;
  string name;
  string sub;
  string tname;
  string dep;
};
int main()
{
   //Type your code here..
  int no;
  cout<<"Enter No. of Instructor Details You Want : "<<endl;
  cin>>no;
  Details arr[no];
  int ind=0;
  while(no-->0)
  {
    Details curr;
    int a;
    cout<<"Enter Id  :  "<<endl;                                                                                                                 
cin>>a;
    curr.id=a;
cout<<"Enter Name :  "<<endl;                                                                                                                       
string b;
    cin>>b;
    curr.name=b;
cout<<"Enter Subject Name : "<<endl;                                                                                                                                                                
string c;
    cin>>c;
    curr.sub=c;
cout<<"Enter Teacher Name :  "<<endl;                                                                             
string d;
    cin>>d;
    curr.tname=d;
cout<<"Enter Department Name :  "<<endl;
string e;
    cin>>e;
    curr.dep=e;
    arr[ind++]=curr;
  }
  for(int i=0;i<ind;i++)
  {
   cout<<"Id :  "<<arr[i].id<<endl;
cout<<"Name :  "<<arr[i].name<<endl;
cout<<"Subject Name  :  "<<arr[i].sub<<endl;
cout<<"Teacher Name  :  "<<arr[i].tname<<endl;
cout<<"Department Name :  "<<arr[i].dep<<endl;
  }
}
