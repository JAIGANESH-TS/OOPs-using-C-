/*Garden
A group of childrens were playing in the garden and they need to form a circle based on the radius and the respected area so help them to find the radius of the area to form a circle by creating a class in c++.
Input Format:

Input consists of one integer which consists of radius.

Output Format:

Output consists of one integer which consists of calculated area.

Sample Input:

6

Sample Output:

Enter the value of Radius : 

Area of Circle : 113.04

Case 1
Case 2
Input (stdin)
6

Output (stdout)
Enter the value of Radius :
Area of Circle : 113.04
solu:-*/
#include<iostream>
using namespace std;
class Circle
{
  private:
  	int radius;
  public:
  	void readRadius()
    {
      cout << "Enter the value of Radius :" << endl;
      cin >> radius;
    }
  	void printArea()
    {
      cout << "Area of Circle : " << 3.14*radius*radius;
    }
};
int main()
{
  //Type your code here...
  Circle c;
  c.readRadius();
  c.printArea();
}
