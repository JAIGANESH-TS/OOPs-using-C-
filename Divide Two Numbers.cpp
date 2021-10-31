/*Divide Two Numbers
Write a C++ program to divide two numbers using try catch block.
Input and Output Format

Refer sample input and output.

Sample Input

Enter two numbers: 0                                                                                                                          

1                                                                                                                                             

Sample Output

a/b = 0  

Case 1
Case 2
Input (stdin)
0
1

Output (stdout)
Enter two numbers:
a/b = 0
solu:--*/
#include <iostream>
#include <stdexcept>
using namespace std;

// defining CheckDenominator
float CheckDenominator(float den)
{
	if (den == 0)
		throw "Error";
	else
		return den;
} // end CheckDenominator

int main()
{
	int numerator, denominator, result;
	cin>>numerator;
	cin>>denominator;

	// try block
	try {

		// calls the CheckDenominator function
		// by passing a string "Error"
		if (CheckDenominator(denominator)) {

			result = (numerator / denominator);
            cout <<"Enter two numbers:"<<endl;
			cout << "a/b = "<< result << endl;
		}
	}

	// catch block
	// capable of catching any type of exception
	catch (...) {

		// Display a that exception has occurred
      cout <<"Enter two numbers:"<<endl;
		cout << "Exception: Division by zero" << endl;
	}

} // end main

