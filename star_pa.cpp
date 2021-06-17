#include<iostream>
using namespace std;

int main()
{
	int i,j,num;
    
cout << "Enter the number of loop :";
    cin >>num;
    
    for(i=0;i<=num;i++)
    {
    	for(j=1;j<i;j++)
	    cout<<"*"<<endl; 
    }
    return 0;
    
}
