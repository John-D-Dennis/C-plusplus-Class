/*
Loops -while
I.C.U. = Initialize, Condition, Update
*/

#include <iostream>

using namespace std;

int main() {
	//if cout is after the integer is creates, program will fail
	cout << "Guess a number between 1 and 10 "<< endl;
	
	//INITIALIZE Variable
	int num=0;
	 cin >> num;
	 
	//create the CONDITION
	while (num !=10) {
		cout << "You lose" << endl;
		cin >>num; //make sure a condition is here so the ths cout won't go in indefinetly'
                               	}
	
	while (num == 10) {
		cout << "You win!" <<endl;
		
		++num; //create UPDATE so the loop knows when to end
                                 	}
	return 0;
}
