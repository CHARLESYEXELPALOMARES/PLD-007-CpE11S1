#include <iostream>
using namespace std;

int main() {
    int grade, total = 0, counter = 0;

    // Processing phase
    cout << "Enter the grades (enter -1 to end):" << endl;

    while (true) {
        cout<< "Enter the grade: ";
        cin>> grade;

        // Check for sentinel value
        if (grade == -1) {
            break;
        }

        total += grade; 
        counter++; 
    }

    // Termination phase
    if (counter != 0) {
        double average = static_cast<double>(total) / counter; 
        cout<<"Class average is "<<average<< endl;
    } else {
        cout<<"No grades were entered."<<endl;
    }

    return 0; 
}
