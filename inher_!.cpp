#include<iostream>
#include<string>
using namespace std;

class Box{
    public : 
     double length;
     double height;
     double breadth;

};


int main()
{
    Box box1;
    Box box2;
    double volume=0.0;
    cin >> box1.length;
    cin >> box1.height;
    cin >> box1.breadth;
    cout <<"\n";
    cin >> box2.length;
    cin >> box2.height;
    cin >> box2.breadth;

    volume = box1.length * box1.height * box1.breadth;
    cout << "The volume of box 1 is :- "<< volume <<endl;

    volume = box2.length * box2.height * box2.breadth;
    cout << "The volume of box 2 is :- "<< volume <<endl;
    return 0;
}