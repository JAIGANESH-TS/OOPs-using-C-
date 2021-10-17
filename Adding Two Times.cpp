/*Adding two times
Write a C++ program to add Two timings and print the output.
Input Format:

The first and fourth input corresponds to the hours

The second and fifth input corresponds to the minutes

The third and sixth input corresponds to the second

Output Format:

Refer sample output

Sample Input:

1

15

12

1

15

12

Sample Output:

2:30:24

Case 1
Case 2
Input (stdin)
2
120
14
1
70
12

Output (stdout)
6:10:26
solu:-*/
#include<iostream>
using namespace std;
class Time
{
  public:
  int hr=0,min=0,sec=0;
  void add(Time t)
  {
    Time total;
    total.sec=sec+t.sec;
    total.min+=(total.sec/60)+min+t.min;
    total.sec%=60;
    total.hr+=(total.min/60)+hr+t.hr;
    total.min%=60;
    cout << total.hr << ":" << total.min << ":" << total.sec;
  }
};
int main()
{
	//type your code here;
  	Time a,b;
  	cin >> a.hr >> a.min >> a.sec;
  	cin >> b.hr >> b.min >> b.sec;
  	a.add(b);
	return 0;
}
