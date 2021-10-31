/*Abstract class - I
Write a program to implement an abstract class in C++ which has one abstract method draw(). Its implementation is provided by derived classes: Rectangle and Circle. Both classes should have a different implementation. Print the given input value in both derived classes.
Read the input as integer

Case 1
Case 2
Case 3
Input (stdin)
6

Output (stdout)
Rectangle
The given input is 6
Circle
The given input is 6
soku:-
*/
#include<iostream>
using namespace std;

class Shape{
  public:
  	virtual void draw() = 0;
};

class Rectangle:public Shape{
  private:
  	int n;
  public:
  	Rectangle(int n){
      this->n=n;
    }
  	void draw(){
      cout << "Rectangle" << endl;
      cout << "The given input is " << n << endl;
    } 
};

class Circle:public Shape{
  private:
  	int n;
  public:
  	Circle(int n){
      this->n=n;
    }
  	void draw(){
      cout << "Circle" << endl;
      cout << "The given input is " << n;
    } 
};
int main()
{
  int n;
  cin >> n;
  Shape *s = new Rectangle(n);
  s->draw();
  s = new Circle(n);
  s->draw();
  return 0;
}
