/*Divide by Zero Exception
Rema has a task of dividing two decimal numbers. But the problem is, if the denominator has zero as input it has to throw the exception or it has to give the quotient value.Write the program for Handling the Divide by Zero Exception in C++ by using the runtime error class. Note: Use #include for run time exception.
Input and Output Format

Refer sample input and output

Sample Input

10.36

12.34

Sample Output

The quotient is 0.839546

Case 1
Case 2
Input (stdin)
10.36
12.34

Output (stdout)
The quotient is 0.839546
solu:--*/
#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
  float a,b;
  cin >> a >> b;
  try{
    if (b==0)
      throw runtime_error("Exception occurred\nMath error: Attempted to divide by Zero");
    cout << "The quotient is " << a/b;
  }
  catch(const std::runtime_error& error){
    cout << error.what();
  }
}
