// Trucker's Pay Assignment - John Dennis

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	double totalPay = 0;
	double payRate = 0.32;
	double milesDrivenWeek1 = 3250 * payRate;
	double milesDrivenWeek2 = 2800 * payRate;
	double totalEarningsBeforeDeductions = milesDrivenWeek1 + milesDrivenWeek2;

	cout << "Enter Darnell's total pay: $";
	cout << fixed << setprecision(2);
	
	cin >> totalPay;
		
		cout << "\nDarnell's total pay before deductions: $" << totalPay << endl;
	    cout << "Darnell drove 3250 miles earning: $" << milesDrivenWeek1 << endl;
		cout << "Darnell drove 2800 miles earning: $" << milesDrivenWeek2 << endl <<endl;
		cout << "After beilng paid for both weeks, \nDarnell's total earnings before deductions is: $" << totalEarningsBeforeDeductions << endl;	
	
		
	return 0;
}