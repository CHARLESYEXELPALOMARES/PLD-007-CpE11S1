#include <iostream>
using namespace std;

int main() {
    // Initialize total to zero and counter to zero
    double total=0.0;
    int counter=0;
    double grade;

    // Input the first grade
    cout<<"Enter a grade (-1 to end): ";
    cin>>grade;

    // While the user has not entered the sentinel
    while (grade != -1) {
        // Add this grade into the running total
        total += grade;
        // Add one to the grade counter
        counter++;
        
        // Input the next grade (possibly the sentinel)
        cout<<"Enter a grade (-1 to end): ";
        cin>>grade;
    }

    // Check if any grades were entered
    if (counter != 0) {
        // Set the average to the total divided by the counter
        double average = total / counter;
        // Print the average
        cout<<"The average of the grades is: "<<average<<endl;
    } else {
        // Print message if no grades were entered
        cout<<"No grades were entered."<<endl;
    }

    return 0;
}
