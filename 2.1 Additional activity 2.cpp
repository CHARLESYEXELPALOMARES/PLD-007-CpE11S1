#include <iostream>
using namespace std;

int main() {
    int pin=1945,inputPin,choice;
    double balance=18000.0,amount;

    cout<<"Enter your PIN:";
    cin>>inputPin;

    if (inputPin != pin) {
        cout<<"The PIN is incorrect; access is denied."<<endl;
        return 1;
    }

    do {
        cout<<"\nATM Menu:\n1. Withdraw\n2. Balance Inquiry\n3. Fund Transfer\n4. Change PIN\n5. Exit\nChoose an option:";
        cin >>choice;

        switch (choice) {
            case 1: // Withdraw
                cout<<"Enter the amount you want to withdraw:";
                cin>>amount;
                if (amount <= balance) balance -= amount;
                cout<<(amount <= balance ? "Withdrawal successful." : "Insufficient balance. ")<<"New balance:"<<balance<<endl;
                break;

            case 2: // Balance Inquiry
                cout<<"Current balance: "<<balance<<endl;
                break;

            case 3: // Fund Transfer
                cout<<"Enter the amount you want to transfer:";
                cin>>amount;
                if (amount <= balance) balance -= amount;
                cout << (amount <= balance ? "Transfer successful. " : "Insufficient balance. ")<<"New balance:"<<balance<<endl;
                break;

            case 4: // Change PIN
                cout<<"Please enter your new PIN:";
                cin>>pin;
                cout<<"Your PIN has been changed successfully."<<endl;
                break;

            case 5: // Exit
                cout<<"Thanks for accessing the ATM. Have a blessed day!!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }
    } while (choice != 5);

    return 0;
}
