/*Student II
Write a C++ program to create a class for the student to get and print details. Create an object of a class inside another class declaration.


Case 1
Case 2
Input (stdin)
jai
30
70

Output (stdout)
jai
30
70%
solu:-*/
#include <iostream>
#include <string.h>

using namespace std;

class Marks
{
	private:
		int rno;
		float perc;
	
	public:
		Marks()
		{rno = 0; perc = 0.0f;}
		void readMarks(void)
		{
			cin>>rno;
			cin>>perc;
		}
		void printMarks(void)
		{
			cout<<rno<<endl;
			cout<<perc<<"%"<<endl;
		}
};

class Student
{
	private:
		Marks objM;
		char name[30];
	
	public:
		void readStudent(void)
		{
			cin.getline(name, 30);
			objM.readMarks();			
		}
		
		void printStudent(void)
		{
			cout<<name<<endl;
			objM.printMarks();
		}
};

int main()
{
	Student std;
	std.readStudent();
	std.printStudent();
	
	return 0;
}
