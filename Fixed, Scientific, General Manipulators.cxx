/* fixed and scientific format

  fixed - shows the entire number sequence
  scientific - forced all numbers to display in scientific notation. ie) 1.23456789 to 1.235e+05;
  general - General format is a mix of fixed and scientific formats. If the number is small enough, fixed format is used. If the number gets too large, the output switches over to scientific format. 
  
*/

#include <iostream> 
using namespace std; 

int main() { 
                      //float defaults to genwral format
          float small = 3.1415926535897932384626; 
          float large = 6.0234567e17; 
          float whole = 2.000000000; 
          
          cout << "Some values in general format" << endl; 
          cout << "small:  " << small << endl;  
          cout << "large:  " << large << endl; 
          cout << "whole:  " << whole << endl << endl; 
          
          cout << scientific; 
          
          cout << "The values in scientific format" << endl; 
          cout << "small:  " << small << endl; 
          cout << "large:  " << large << endl; 
          cout << "whole:  " << whole << endl << endl; 
          
          cout << fixed; 
          
          cout << "The same values in fixed format" << endl; 
          cout << "small:  " << small << endl; 
          cout << "large:  " << large << endl; 
          cout << "whole:  " << whole << endl << endl; 
          // Doesn't work -- doesn't exist 
          // cout << general; 
          
          cout.unsetf(ios::fixed | ios::scientific); // magic incantation to sdr it back to general
          
          cout << "Back to general format" << endl; 
          cout << "small:  " << small << endl; cout << "large:  " << large << endl; 
          cout << "whole:  " << whole << endl << endl; 
          
          return 0;
          
 } 