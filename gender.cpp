#include<iostream>
using namespace std;

int main()
{
	
    //create a c++ program to determine if the gender is male or a female
    char c;
    
    cout<<"Enter el genero:";
    cin>>c;
    
	switch(c)
	{
		 case 'm':
		 	 cout<<"male";
		 break;	 
		 
		 case 'M':
		 	 cout<<"Male";
		 break;	
		 
		 case 'f':
		 	 cout<<"female";
		 break;	
		 
		 case 'F':
		 	 cout<<"Female";
		 break;	
		 
		 default:
		       {
		       	    cout<<"Prefer not to state gender";
		       	    break;
			   }
	}
	 
	 return 0;
}
