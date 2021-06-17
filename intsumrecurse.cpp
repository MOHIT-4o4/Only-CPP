#include<iostream>
using namespace std;
struct Person
{
 int age;
 string work, name,address;
};


int main()
{
    Person p1;
    cout << "Enter the Name\n";
    getline(cin,p1.name);
    cout << "Enter the age \n";
    cin >> p1.age;
    cout << "Enter the address \n";
    cin >> p1.address;

    cout << "Your details are : \n";
    cout << "Name :" << p1.name << endl;
    if(p1.age>0){
    cout << "age :" << p1.age <<endl;
    }
    cout << "address :" << p1.address <<endl;
    cout << "THANK YOU";
    return 0;

}
