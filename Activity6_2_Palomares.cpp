#include <iostream>
using namespace std;

int main() {
    int age;
    double fare;
    const double MIN_FARE=9.0;

    // Input the age and fare
    cout<<"Enter your age (5 to 24 or 25 and above): ";
    cin>>age;
    cout<<"Enter the fare amount: ";
    cin>>fare;

    // Ensure fare is at least the minimum
    fare=(fare < MIN_FARE)? MIN_FARE : fare;

    // Computes the discount based on age
    if (age < 5) {
        cout<<"No discount applicable. Fare: "<<fare<<" pesos."<<endl;
    } else if (age <= 12) { // 5 to 12
        fare *= 0.92; // 8% discount
        cout<<"Student fare: "<<fare<<" pesos."<<endl;
    } else if (age <= 24) { // 13 to 24
        char isStudent;
        cout<<"Are you a student? (y/n): ";
        cin>>isStudent;
        if (isStudent == 'y' || isStudent == 'Y') {
            fare *= 0.92; // 8% discount for students
        }
        cout<<"Fare: "<<fare<<" pesos."<<endl;
    } else if (age >= 25 && age < 60) { // 25 to 59
        char isStudent;
        cout<<"Are you a student? (y/n): ";
        cin>>isStudent;
        if (isStudent == 'y' || isStudent == 'Y') {
            fare *= 0.92; // 8% discount for students
        }
        cout<< "Fare: "<<fare<<" pesos."<<endl;
    } else if (age >= 60) { // 60 and above
        char isStudent;
        cout<< "Are you a student? (y/n): ";
        cin>> isStudent;
        if (isStudent == 'y' || isStudent == 'Y') {
            fare *= 0.92; // 8% discount for students
        } else {
            fare *= 0.90; // 10% discount for seniors
        }
        cout<<"Senior fare: "<<fare<<" pesos."<<endl;
    }

    return 0;
}
