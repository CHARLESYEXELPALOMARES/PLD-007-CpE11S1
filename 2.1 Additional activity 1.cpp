#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    // Input the base and height
    cout<<"Enter the rectangle's base:";
    cin>>base;
    cout<<"Enter the rectangle's height:";
    cin>>height;

    // Calculate the area using A = (1/2) * b * h
    area=0.5*base*height;

    // Output area
    cout<<"The rectangle has an area of:"<<area<<endl;

    return 0;
}