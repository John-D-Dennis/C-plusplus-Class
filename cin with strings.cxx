//cin with strings
/*
	 With getline on the left-side and cin with the string variable seperated my a comma and both inbetween ( ), it acts as cin and then the value for cin which is the user input */

#include <iostream>
#include <string>
using namespace std;

int main ()
{	 
	 string mystr;
	 cout <<"What's your name? ";
	 getline (cin, mystr); 
	 cout<<"Hello " <<mystr<< ".\n";
	 cout <<"What is your favorite team? ";
	 getline (cin, mystr);
	 cout <<"I like " <<mystr<< " too!\n";
	 
	 return 0;
	
}