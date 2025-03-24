#include <iostream>
#include <string>	
#include <sstream>
using namespace std;


string data1;
string firstName;
string lastName;
string age;

int main () {

cout << "Enter your First Name, Last Name, and Age: ";

getline(cin, data1);  //create a string variable to use with stringstream
stringstream ss(data1); // use the stringstream data type, name the local variable, then the variable for getline

ss >> firstName >> lastName >> age; /* with the local variable, use >> between every variable you'll type. 
									After every space it will save the value to the variables listed in order*/

cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "Age: " << age << endl;


return 0;

}