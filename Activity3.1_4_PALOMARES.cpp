#include <iostream>                                                                                   
using namespace std;
int main() {
    int userChoice;
    float userInput, convertedValue;
    string continueChoice;

    do {
        cout<<"Choose a conversion:"<<endl;
        cout<<"(1) cm to inches"<<endl;
        cout<<"(2) inches to cm"<<endl;
        cout<<"(3) feet to meters"<<endl;
        cout<<"(4) meters to feet"<<endl;
        cout<<"(5) Exit"<<endl;
        cin>>userChoice;

        if (userChoice == 5) {
            break;
        }

        cout<<"Enter the value to convert: ";
        cin>>userInput;

        switch (userChoice) {
            case 1:
                convertedValue = userInput / 2.54;
                cout<<"Converted value: "<<convertedValue<<" inches"<<endl;
                break;
            case 2:
                convertedValue = userInput * 2.54;
                cout<<"Converted value: "<<convertedValue<<" cm"<<endl;
                break;
            case 3:
                convertedValue = userInput * 0.3048;
                cout<<"Converted value: "<<convertedValue<<" meters"<<endl;
                break;
            case 4:
                convertedValue = userInput / 0.3048;
                cout<<"Converted value: "<<convertedValue<<" feet"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again ."<<endl;
                break;
        }

        cout<<"Do you want to convert another value? (y/n): ";
        cin>>continueChoice;

    } while (continueChoice == "yes");
    return 0;
}
/*START
    WHILE true DO
        DISPLAY "Choose a conversion:"
        DISPLAY "(1) cm to inches"
        DISPLAY "(2) inches to cm"
        DISPLAY "(3) feet to meters"
        DISPLAY "(4) meters to feet"
        DISPLAY "(5) Exit"
        
        GET userChoice
        
        IF userChoice is 5 THEN
            BREAK
        
        GET userInput
        
        IF userChoice is 1 THEN
            convertedValue = userInput / 2.54
            DISPLAY "Converted value: " + convertedValue + " inches"
        ELSE IF userChoice is 2 THEN
            convertedValue = userInput * 2.54
            DISPLAY "Converted value: " + convertedValue + " cm"
        ELSE IF userChoice is 3 THEN
            convertedValue = userInput * 0.3048
            DISPLAY "Converted value: " + convertedValue + " meters"
        ELSE IF userChoice is 4 THEN
            convertedValue = userInput / 0.3048
            DISPLAY "Converted value: " + convertedValue + " feet"
        ELSE
            DISPLAY "Invalid choice. Please try again ."
        
        DISPLAY "Do you want to convert another value? (y/n)"
        GET continueChoice
        
        IF continueChoice is "no" THEN
            BREAK
    END WHILE
END*/

