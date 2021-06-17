#include<iostream>
using namespace std;
struct person
{
    int age;
    string name,address;
};

void getdetails(person q);

int main()
{
    person q;

    getdetails(q);
    cout << "Your details :";
    return 0;
}

void getdetails(person q)
{
    cout << "Enter your name :"<<endl ;
    getline(cin,q.name);
    cout << "Enter your age :"<<endl;
    cin >> q.age ;

    cout << "Enter your address :"<<endl;
    getline(cin,q.address);

    cout << "Name :"<<q.name<<endl;
    cout<< "Age :"<<q.age<<endl;
    cout << "Address :"<<q.address<<endl;

}
