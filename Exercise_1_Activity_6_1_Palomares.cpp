#include <iostream>
using namespace std;

int main() {
    int total = 0; 
    int gradeCounter=1;
    int grade;

    // Loop to input grades for ten students
    while (gradeCounter <= 10) {
        cout << "Enter grade for student " << gradeCounter << ": ";
        cin >> grade;

        // Check if the grade is in the valid range
        if (grade < 0 || grade > 100) {
            cout<<"Please enter a valid grade (0-100)."<<endl;
            continue; 
        }

        total += grade; 
        gradeCounter++; 
    }

    // Calculate the class average
    double classAverage = static_cast<double>(total) / 10;

    // Print the class average
    cout << "The class average is: "<<classAverage<<endl;

    return 0;
}
