//A test of setw () setwidth
/* 
setw() makes spaces between two values. The numner of spqces is nased on yhe number inbetweem the paranthesis()
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() {
	
	cout << "*" << -17 << "*" << endl; 
	cout << "*" << setw (6) << -17 << "*" << endl << endl; 
	
	cout << "*" << "Hi there!" << "*" << endl;     cout << "*" << setw(20) << "Hi there!" << "*" << endl; 
	cout << "*" << setw(3) << "Hi there!" << "*" << endl;
	
	return 0;
	
}