/*Time Machine
Jethro and Jairo were developing a time machine. Jehtro can do a machine in certain hours,minutes and seconds where as Jairo can do a same work in different hours,minutes and seconds. Help the Einstein to find the total time for developing the time machine by creating a class and objects in c++.
Input Format:

Input consists of three integers. First input consists of hours. Second input consists of minutes. Third input consists of seconds.

Output Format:

Output consists of three integers. First output consists of hours. Second output consists of minutes and third consists of seconds.

Sample Input:

6

35

58

5

35

59

Sample Output:

Enter time:

Hours :

Minutes :

Seconds :

Enter time:

Hours :

Minutes :

Seconds :

Time after add: 12:11:57

Case 1
Case 2
Input (stdin)
6
35
58
5
35
59

Output (stdout)
Enter time:
Hours :
Minutes :
Seconds :
Enter time:
Hours :
Minutes :
Seconds :
Time after add: 12:11:57
sol:-*/
#include<iostream>
using namespace std;
class Time{
  public:
  	int h,m,s;
  	Time(){
      cout << "Enter time:" << endl;
      cout << "Hours :" << endl;
      cin >> h;
      cout << "Minutes :" << endl;
      cin >> m;
      cout << "Seconds :" << endl;
      cin >> s;
    }
  	void add(Time b){
      int x=h+b.h,y=m+b.m,z=s+b.s;
      y+=z/60;
      z%=60;
      x+=y/60;
      y%=60;
      cout << "Time after add: " << x << ":" << y << ":" << z;
    }
};
int main()
{
  //Type your code here...
  Time a,b;
  a.add(b);
}
