// Convert Fahrenheit to Celsius

#include <iostream>
using namespace std;

int main () {
     
     cout << "What is the temperature today in fahrenheit?" << endl;
     cout << "Temperature: ";
     int fahrenheit;
     cin >> fahrenheit;
     
     double celsius = (fahrenheit - 32 / 1.8);
     cout << "It is " << celsius << " degrees celsius";
    
    return 0;
}