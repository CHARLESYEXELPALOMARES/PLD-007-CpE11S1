/*START

  SET total_mpg = 0.0
  SET count = 0

  WHILE TRUE DO
    PROMPT "Enter the gallons that has been used used (-1 to end):"
    READ gallons

    IF gallons == -1 THEN
      BREAK // Exit the loop if gallons is -1
    ENDIF

    PROMPT "Enter the miles driven:"
    READ miles

    // Compute miles per gallon
    mpg = miles / gallons
    total_mpg = total_mpg + mpg // Accumulate total MPG
    count = count + 1 // Increment count

    PRINT "The miles/gallon for this tank was ", mpg
  ENDWHILE

  IF count > 0 THEN
    PRINT "The total average miles/gallon was ", total_mpg / count
  ELSE
    PRINT "No data to compute average."
  ENDIF

END*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double gallons, miles, total_mpg = 0.0;
    int count = 0;

    while (true) {
        cout<<"Enter the gallons that has been used (-1 to end): ";
        cin>>gallons;
        
        if (gallons == -1) break;

        cout<<"Enter the miles driven: ";
        cin>>miles;

        double mpg = miles / gallons; // Calculate miles per gallon
        total_mpg += mpg; // Accumulate total MPG
        count++; // Count the number of tankfuls

        cout<<"The miles/gallon for this tank was "<<fixed<<setprecision(6)<<mpg<<endl;
    }

    if (count > 0) {
        cout<<"The total average miles/gallon was "<<fixed<<setprecision(6)<<(total_mpg / count)<<endl;
    } else {
        cout<<"No data to compute average."<<endl;
    }

    return 0;
}
