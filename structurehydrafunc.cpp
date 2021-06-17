#include<iostream>
using namespace std;
struct hydra
{
    string name,studies;
};

int main()
{
    hydra *clas,d;
    clas = &d ;
    cout << "Enter your name : ";
    getline(cin,(*clas).name);
    cout << "\nEnter what you are studying :";
    getline(cin,(*clas).studies);

    cout << "Your details : ";
    cout << "Name:- "<< (*clas).name<<endl;
    cout << "Study:-"<< (*clas).studies<<endl;
    cout << "THANK YOU !";
    return 0;
}
