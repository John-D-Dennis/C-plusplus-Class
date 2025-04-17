/*
Loops -for
I.C.U. = Initialize, Condition, Update
*/

#include <iostream>
using namespace std;

int main() {
	 int i; //Must declare the variable first
	 
	for (i = 1; i <= 10; i++)
	 //ICU-Identify (i=1), Condition(i<=10), Update(i++)
	{
	cout << " The value of i is: " << i << endl;
	}
	//you can have the program run another for loop for another condition is meet down the line
      for ( i =10; i >= 10; i--) {
      	cout << "You have exceeded the limit" <<endl;
      }
      	
	return 0;
                    }