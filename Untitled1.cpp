#include<iostream>
using namespace std;

int main()  {
    //local variable
    int num1=0, num2=0, num3=0, average=0, sum = 0, difference = 0, product = 0;
    double quotient = 0.0; // to handle division

    cout << "Input num1: ";
    cin >> num1;
    cout << "Input num2: ";
    cin >> num2;
    cout << "Input num3: ";
    cin >> num3;

    // Calculations
    sum = (num1 + num2 + num3);
    average = sum / 3;
    difference = (num1 - num2 - num3);
    product = (num1 * num2 * num3);
    quotient = (num2 != 0 && num3 != 0) ? (static_cast<double>(num1) / num2 / num3) : 0.0;

    // Quotient Calculation: (num1/num2)/num3
    if (num2 != 0 && num3 != 0) {
       quotient = static_cast<double>(num1) / num2;
       quotient = quotient / num3;
    } else {
         cout << "undefined" << endl;
    }
     
    // Display results
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
 
    if (num2 != 0 && num3 != 0) {
         cout << "Quotient: " << quotient << endl;
    }
    return 0;
}

