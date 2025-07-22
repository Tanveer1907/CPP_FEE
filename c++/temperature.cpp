#include <iostream>
using namespace std;

int main() {
    float temp;
    char unit;
    
    cout << "Enter Temperature: ";
    cin >> temp;
    cout << "Enter unit (C/F/K): ";
    cin >> unit;

    float celsius, fahrenheit, kelvin;

    if(unit == 'C' || unit == 'c') {
        celsius = float(temp);
        kelvin = celsius + 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;
    } else if(unit == 'F' || unit == 'f') {
        fahrenheit = float(temp);
        celsius = (fahrenheit - 32) * 5 / 9;
        kelvin = celsius + 273.15;
    } else if(unit == 'K' || unit == 'k') {
        kelvin = float(temp);
        celsius = kelvin - 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;
    } else {
        cout << "Invalid unit!" << endl;
        return 1;
    }

    cout << "Temperature in Celsius: " << celsius << " C" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}
