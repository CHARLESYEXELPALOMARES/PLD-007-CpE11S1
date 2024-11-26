#include <iostream>
using namespace std;

// Function to compute the volume of a cube
double cubeVolume(double s) {
    return s * s * s; 
}

int main() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    cout << "Volume of the cube: " << cubeVolume(side) << endl;
    return 0;
}