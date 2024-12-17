#include <iostream>
using namespace std;

const float exchangeRate = 50; // Conversion rate

// Convert dollars to pesos
float dollarsToPesos(float dollars) {
    return dollars * exchangeRate;
}

// Convert pesos to dollars
float pesosToDollars(float pesos) {
    return pesos / exchangeRate;
}

int main() {
    float dollars, pesos; 

    // 	Convert dollars to pesos
    cout << "Enter amount in dollars: ";
    cin >> dollars;
    cout << "Pesos: " << dollarsToPesos(dollars) << endl;

    // Convert pesos to dollars
    cout << "Enter amount in pesos: ";
    cin >> pesos;
    cout << "Dollars: " << pesosToDollars(pesos) << endl;

    return 0; // End of the program
}