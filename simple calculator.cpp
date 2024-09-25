#include<iostream>
using namespace std;

int main()
{
	
    //create a c++ program that applies a calculator function
    char c;
    double num1,num2;
    double sum,difference,product;
    double quotient;
    
    cout<<"Enter el operator:";
    cin>>c;
    
	switch(c)
	{
		 case '+':
		 	  cout<<"input num1";
			  cin>>num1;
			  cout<<"input num2";
			  cin>>num2;
			  sum=(num1+num2);
			  cout<<"Sum:"<<sum;
		 break;	 
		 
		 case '-':
		 	  cout<<"input num1";
			  cin>>num1;
			  cout<<"input num2";
			  cin>>num2;
			  difference=(num1-num2);
			  cout<<"Difference:"<<difference;
		 break;	
		 
		 case '*':
		 	  cout<<"input num1";
			  cin>>num1;
			  cout<<"input num2";
			  cin>>num2;
			  product=(num1*num2);
			  cout<<"Product:"<<product;
		 break;	
		 
		 case '/':
		 	  cout<<"input num1";
			  cin>>num1;
			  cout<<"input num2";
			  cin>>num2;
			  quotient=(num1/num2);
			  cout<<"Quotient:"<<quotient;
		 break;	
		 	 
	}
	 return 0;
}
