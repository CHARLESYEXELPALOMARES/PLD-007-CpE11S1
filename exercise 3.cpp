#include<iostream>
using namespace std;

int main()
{
    float Grade;
    
    cout<<"Input The Grade Percentage"<<endl;
    cout<<"Grade Percentage:";
	cin>>Grade;
    
    if(Grade>=94 && Grade <=100)
    {
    	cout<<"Your Grade is Excellent"<<endl;
	}
    else if(Grade>=88.5 && Grade < 94)
    {
	    cout<<"Your Grade is Superior"<<endl;
    }  
    if(Grade>=83 && Grade < 88.55)
    {
    	cout<<"Your Grade is Meritorious"<<endl;
	}
    else if(Grade>=77.5 && Grade < 83)
    {
        cout<<"Your Grade Good"<<endl;
	}
	if(Grade>=72 && Grade < 77.5)
    {
    	cout<<"Your Grade is Good"<<endl;
	}
    else if(Grade>=65.5 && Grade < 72)
    {
        cout<<"Your Grade Satisfactory"<<endl;
	}
    if(Grade>=61 && Grade < 65.5)
    {
    	cout<<"Your Grade is Satisfactory"<<endl;
	}
    else if(Grade>=55.5 && Grade < 61)
    {
        cout<<"Your Grade is Fair"<<endl;
	}	
	if(Grade>=50 && Grade < 55.5)
    {
    	cout<<"Your Grade is Passing"<<endl;
	}
    else if(Grade>=0 && Grade < 50)
    {
        cout<<"Your Grade is Failed"<<endl;
	}	
		

    return 0;
}
