#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the hypotenuse of a right triangle
double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b); 
}

int main() {
    double a, b;
    cout << "Enter the lengths of the two sides of the triangle: ";
    cin >> a >> b;
    cout << "Length of the hypotenuse: " << hypotenuse(a, b) << endl;
    return 0;
}