//Using getline along with stringstream to type all values on one line

#include <iostream>
#include <string>

using namespace std;


string data1;
string firstName;
string lastName;
string age;
 
int main() {

	cout << "Enter your First Name, Last Name, and then your Age: ";

	
	cin >> firstName >> lastName >> age; //make sure to use the greater than sign like with cin

	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Age: " << age << endl;


	return 0;

}
