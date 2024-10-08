/*START

  WHILE TRUE DO
    PROMPT "Enter account number (-1 to end):"
    READ account_number

    IF account_number == -1 THEN
      BREAK // Exit the loop if account number is -1
    ENDIF

    PROMPT "Enter beginning balance:"
    READ beginning_balance

    PROMPT "Enter total charges:"
    READ total_charges

    PROMPT "Enter total credits:"
    READ total_credits

    PROMPT "Enter credit limit:"
    READ credit_limit

    // Calculate new balance
    new_balance = beginning_balance + total_charges - total_credits

    // Check if the new balance exceeds the credit limit
    IF new_balance > credit_limit THEN
      PRINT "Account: ", account_number
      PRINT "Credit limit: ", credit_limit
      PRINT "Balance: ", new_balance
      PRINT "Credit limit exceeded."
    ENDIF
  ENDWHILE

  PRINT "Program ends."
END*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int account_number;
    
    while (true) {
        cout<<"Enter account number (-1 to end): ";
        cin>>account_number;

        if (account_number == -1) break;

        double beginning_balance, total_charges, total_credits, credit_limit;
        cout<< "Enter beginning balance: ";
        cin>> beginning_balance;
        cout<< "Enter total charges: ";
        cin>> total_charges;
        cout<< "Enter total credits: ";
        cin>> total_credits;
        cout<< "Enter credit limit: ";
        cin>> credit_limit;

        double new_balance = beginning_balance + total_charges - total_credits;
        
        if (new_balance > credit_limit) {
            cout<< "Account: "<<account_number<<endl;
            cout<< "Credit limit: "<<fixed<<setprecision(2)<<credit_limit<<endl;
            cout<< "Balance: "<<fixed<<setprecision(2)<<new_balance<<endl;
            cout<<"Credit limit exceeded." << endl;
        }
    }

    cout<<"Program ends."<<endl;
    return 0;
}
