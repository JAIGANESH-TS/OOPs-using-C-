/*ADA company
William is the recruiter of a ADA company. He went for a recruitment process on a college. William conducted the first round. First round is conducted in a website and generated the score of the test. He set the cutoff mark as 50 and need to send the mail for individual candidates. When he enters the generated score to the platform it has to show that whether candidate cleared the first round or not. William is requesting you to write the program to find the exception of the test and to rethrow the candidate level for the second round.
Input and Output Format

Refer sample input and output

Sample Input

45

Sample Output

first round not cleared

Case 1
Case 2
Input (stdin)
45

Output (stdout)
first round not cleared
solu:--*/
#include<iostream>
using namespace std;
int main()
{
  try{
    int n;
    cin >> n;
    if (n<50)
      throw "first round not cleared";
   	else{
      cout << "first round cleared" << endl;
      cout << "eligible for second round";
    }
  }
  catch(const char *s){
    cout << s;
  }
}
