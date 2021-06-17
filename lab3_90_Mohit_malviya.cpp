//Mohit Malviya
//En. no. :- 0187cs191090 

#include<iostream>
using namespace std;

int main()
{
    float unit, P, mp= 0, Tc;
    string name;
    
    cout<< "Enter the name of USER :";
    getline(cin,name);

    cout<<"Enter the unit :";
    cin>> unit;

if(unit<=100)
{
        P = unit * 0.60 ;
}
else if (unit<=200)
    P = unit * 0.80 ;
else 
    P = unit * 0.92 ;
if (P>=300)
    mp = P * 0.15 ;
Tc = 50 + mp + P;

    cout<<"Hello " << name << " Your Bill amount is "<<Tc;
    return 0;
}