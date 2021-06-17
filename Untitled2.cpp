#include<iostream>
using namespace std;

int  main()
{
    float unit,tc,total_cost,surchase=0;
    char name[20];
    cout<<"Electricity Board Charges\n";
    cout<<"\tTo Discourage Large Consumption of energy\n";

    cout<<"\nEnter USER name :-\n";
    cin>>name;

    cout<<"\nEnter Number of Units Consumed:- ";
    cin>>unit;

//MANIPULATION
    if(unit<=100)
        tc=unit*0.40;
    else if(unit<=300)
        tc=unit*0.50;
    else
        tc=unit*0.60;

    if(tc>300)
        surchase=tc*0.15;
        total_cost = 500 + surchase + tc;

    cout<<"\nYOUR BILL AMOUNT IS "<<total_cost;

return 0;
}