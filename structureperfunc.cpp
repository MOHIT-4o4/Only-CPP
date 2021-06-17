#include<iostream>
using namespace std;

struct Person
{
    int age;
    string name,address;
    float salary;
};

void document(Person q1);

int main()
{
    Person q1;
    cout << "Enter your name: "<< endl;
    getline(cin,q1.name);
    cout << "Enter your age : "<< endl;
    cin >> q1.age;
    document(q1);
    return 0;
}

void  document(Person q1)
{
    cout << "Your details\n";
    cout << "Name : "<< q1.name<< endl;
    cout << "Age :" << q1.age;
}
