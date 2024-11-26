#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
int celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
int fahrenheit(int celsius) {
    return celsius * 9 / 5 + 32;
}

int main() {
    // Celsius to Fahrenheit
   cout << "Celsius to Fahrenheit:\n";
    cout << "Celsius\tFahrenheit\n";
    for (int c = 0; c <= 100; c++) {
        cout << c << "\t" << fahrenheit(c) << endl;
    }

    // Fahrenheit to Celsius
    cout << "\nFahrenheit to Celsius:\n";
    cout << "Fahrenheit\tCelsius\n";
    for (int f = 32; f <= 212; f++) {
        cout << f << "\t\t" << celsius(f) << endl;
    }

    return 0;
}