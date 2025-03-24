/*
Internal justification separates the sign of a number from its digits. The sign is left justified and the digits are right justified. 
*/

#include <iostream> 
#include <iomanip> 

using std::cout; 
using std::endl; 
using std::setw; 
using std::internal; 

int main() 
{ 
    cout << setw(9) << -3.25 << endl;                   cout << internal << setw(9) << -3.25 << endl; 
           
           return 0;
}