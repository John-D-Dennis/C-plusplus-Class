// Input - Kilo to pounds - John Dennis
/*
Write a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds.
Output both the weights rounded to two decimal places. 
(Note that 1 kilogram =2.205 pounds 2.2 pounds. ) 
Format your output with two decimal places. 
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weightKilograms = 0;
    
    cout << "Enter your weight in Kilograms: ";
    cin >> weightKilograms;

    double weightPounds = weightKilograms * 2.205;
    /* If this value created before you input [cin >> weightKilogram],
    the value of [weightPounds] will remain 0. You MUST make sure the variable that is using 
    an arithmetic operator is placed after your [cin] to make sure the correct value is used*/

    cout << fixed << setprecision(2); 
    //Make sure to use the [iomanip] library to define the [setprecision] action
    //Also use [fixed] to switch from [generel] since this can result in an E notation

        cout << "\nYour weight is " << weightKilograms << " kg" << endl;
        cout << "When it is converted to pounds, it would be " << weightPounds << " lbs" << endl;

    return 0;
}
