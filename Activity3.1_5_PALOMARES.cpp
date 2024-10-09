/*START
    SET PI to 3.14
    INITIALIZE area as a float
    INITIALIZE choice as an integer

    REPEAT
        DISPLAY "Choose a calculation:"
        DISPLAY "1. Circle"
        DISPLAY "2. Rectangle"
        DISPLAY "3. Triangle"
        DISPLAY "4. Square"
        DISPLAY "5. Exit"
        GET choice

        IF choice is 1 THEN
            DISPLAY "Enter the radius:"
            GET radius
            SET area = PI * radius * radius
            DISPLAY "Area of the circle: " + area

        ELSE IF choice is 2 THEN
            DISPLAY "Enter the length and width:"
            GET length, width
            SET area = length * width
            DISPLAY "Area of the rectangle: " + area

        ELSE IF choice is 3 THEN
            DISPLAY "Enter the base and height:"
            GET base, height
            SET area = 0.5 * base * height
            DISPLAY "Area of the triangle: " + area

        ELSE IF choice is 4 THEN
            DISPLAY "Enter side:"
            GET side
            SET area = side * side
            DISPLAY "Area of the square: " + area

        ELSE IF choice is not 5 THEN
            DISPLAY "Invalid choice. Try again."

    UNTIL choice is 5

END*/


#include <iostream>
using namespace std;
const double PI = 3.14;

int main() {
    int choice;
    float area;

    do {
        cout<<"Choose a calculation:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Exit\n";
        cin>>choice;

        if (choice == 1) {
            float radius;
            cout<<"Enter the radius: ";
            cin>>radius;
            area = PI * radius * radius;
            cout<<"Area of the circle: "<<area<<endl;

        } else if (choice == 2) {
            float length, width;
            cout<<"Enter the length and width: ";
            cin>>length>>width;
            area = length * width;
            cout<<"Area of the rectangle: "<<area<<endl;

        } else if (choice == 3) {
            float base, height;
            cout<<"Enter the base and height: ";
            cin>>base>>height;
            area = 0.5 * base * height;
            cout<<"Area of the triangle: "<<area<<endl;

        } else if (choice == 4) {
            float side;
            cout<<"Enter side: ";
            cin>>side;
            area = side * side;
            cout<<"Area of the square: "<<area<<endl;

        } else if (choice != 5) {
            cout<<"Invalid choice. Try again."<<endl;
        }

    } while (choice != 5);

    return 0;
}
