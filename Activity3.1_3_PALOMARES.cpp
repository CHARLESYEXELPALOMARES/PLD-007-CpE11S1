/*START

  SET base_cost = 5.00
  SET additional_cost_per_100g = 2.00
  SET max_weight = 1000.0

  PROMPT "Enter the weight of the parcel in grams (up to 1000g):"
  READ weight

  IF weight <= 0 THEN
    PRINT "Invalid weight. Please enter the right positive value."
  ELSE IF weight > max_weight THEN
    PRINT "Weight exceeds the maximum limit of 1000g."
  ELSE
    SET total_cost = base_cost // Start with base cost

    IF weight > 300 THEN
      // Computete additional weight over 300g
      SET additional_weight = weight - 300
      // Compute the number of 100g increments, rounding up
      SET increments = CEIL(additional_weight / 100)
      overall_cost = total_cost + (increments * additional_cost_per_100g)
    ENDIF

    PRINT "The cost of sending the parcel is: P", total_cost
  ENDIF

END*/


#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double weight;
    const double base_cost = 5.00;
    const double additional_cost_per_100g = 2.00; 
    const double max_weight = 1000.0; 

    cout<<"Enter the weight of the parcel in grams (up to 1000g): ";
    cin>>weight;

    if (weight <= 0) {
        cout<<"Invalid weight. Please enter the right positive value."<<endl;
    } else if (weight > max_weight) {
        cout<<"Weight excel the maximum limit of 1000g."<<endl;
    } else {
        double total_cost = base_cost; // Start with the base cost

        if (weight > 300) {
            // Compute additional weight over 300g
            double additional_weight = weight - 300;
            // Compute the number of 100g increments, rounding up
            int increments = static_cast<int>(ceil(additional_weight / 100));
            total_cost += increments * additional_cost_per_100g;
        }

        cout<<"The cost of sending the parcel is: P"<<total_cost<<endl;
    }

    return 0;
}

