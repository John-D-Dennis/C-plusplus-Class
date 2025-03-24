/*
std::left and std::right are I/O manipulators used to control the alignment of output within a field of a specified width. 
They are used in conjunction with std::setw (from <iomanip>).
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() { 
          cout << "*" << -17 << "*" << endl; 
          cout << "*" << setw(6) << -17 << "*" << endl; 
          cout << left; cout << "*" << setw(6) << -17 << "*" << endl << endl; 
          
          cout << "*" << "Hi there!" << "*" << endl; 
          cout << "*" << setw(20) << "Hi there!" << "*" << endl; 
          cout << right; cout << "*" << setw(20) << "Hi there!" << "*" << endl; 
          
          return 0;
          
 } 