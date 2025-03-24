/* showpoint and noshowpoint 
The showpoint manipulator forces trailing zeros to be printed, even though they are not needed. If there'sonly 1 number, it will be followed by a decimal and 5 digits'
*/

#include <iostream> 
#include <iomanip>
using std::cout; 
using std::endl; 
using std::showpoint;  // need to use to implement showpoint

int main() { 
         float lots = 3.1415926535; 
         float little1 = 2.25; 
         float little2 = 1.5; 
         float whole = 4.00000; 
         
         cout << "Some values with noshowpoint (the default)" << endl << endl;         
         cout << "lots:    " << lots << endl; 
         cout << "little1: " << little1 << endl; 
         cout << "little2: " << little2 << endl; 
         cout << "whole:   " << whole << endl; 
         
         cout << endl << endl; 
         
         cout << "The same values with showpoint" << endl << endl; 
         
         cout << showpoint; 
         /* must be used before shown in the values (The default max is 6 digits)*/
         
         cout << "lots:    " << lots << endl; 
         cout << "little1: " << little1 << endl; 
         cout << "little2: " << little2 << endl; 
         cout << "whole:   " << whole << endl; 
         
           return 0; 
           
} 