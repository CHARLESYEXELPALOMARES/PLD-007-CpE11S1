#include<iostream>
using namespace std;

int main()
{
	
    //create a c++ program to determine if alphabet is voweL or a consonant
    char c;
    
    cout<<"Enter el alfabeto:";
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
		       	    cout<<"Neither of both gender";
		       	    break;
			   }
	}
	 
	 return 0;
}
