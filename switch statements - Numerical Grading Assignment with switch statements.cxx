//Numerical Grading Assignment with switch statements- John Dennis

#include <iostream>
using namespace std;

int main (){
	
	int grade = 0;
	
	cout << "Enter the grade you received"<< endl;
	cin >> grade;
	
	switch (grade) {
		case 90 ... 100000:
		    cout << "You've earned grade letter A (90 or above)";//switch statements alone need to have a limited number so I made the above limit astronomical
		    break;
		case 80 ... 89:
		    cout << "You've earned grade letter F (between 80 and 89)";
		    break;
		    case 70 ... 79:
		    cout << "You've earned grade letter F (between 70 and 79)";
		    break;
		    case 60 ... 69:
		    cout << "You've earned grade letter F (between 60 and 69)";
		    break;
		    case 0 ... 59:
		    cout << "You've earned grade letter F (59 or below)"; //this also needd a limit so ao made the lowest limit zero
		    break;
		    default:
		    cout << " numbers outside of 1 though 100" << endl;
	}
	return 0;
}
	    
		    