#include<iostream>
using namespace std;

int main()
{
    int x=4,y=2;
    int sum,difference,product,remainder;
    float quotient;
    
	cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
   
    sum = x+y;
    difference = (x - y);
    product = (x * y);
    quotient = (x / y); 
    remainder = (x % y);
    
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}
