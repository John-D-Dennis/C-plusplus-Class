//Numerical Grading Assignment - John Dennis

#include <iostream>
using namespace std;

int main (){
	
	const int gradeA = 90;
	const int gradeB = 80;
	const int gradeC = 70;
	const int gradeD = 60;
	const int gradeF = 59;
	
	int gradeEarned = 0;
	
	cout << "Enter the grade you received"<< endl;
	cin >> gradeEarned;
	
	if (gradeEarned >= gradeA){
		cout << "You've earned grade letter A (90 or above)";
	}else if( gradeEarned >= gradeB){
		cout << "You've earned grade letter B (80 through 89)";
	}else if( gradeEarned >= gradeC){
		cout << "You've earned grade letter C (70 through 79)";
	}else if( gradeEarned >= gradeD){
		cout << "You've earned grade letter D (60 through 69)";
	}else if( gradeEarned <= gradeF){
		cout << "You've earned grade letter F (below 60)";
	}

	return 0;
}
	
	