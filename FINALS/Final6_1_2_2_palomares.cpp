#include <iostream>
using namespace std;

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float fahrenheit, celsius; 

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Celsius: " << fahrenheitToCelsius(fahrenheit) << endl;

   
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Fahrenheit: " << celsiusToFahrenheit(celsius) << endl;

    return 0;
}