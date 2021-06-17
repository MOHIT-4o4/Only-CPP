#include<iostream>
#include<string>
using namespace std;

class printdata {
    public : 
    void print()
    {   int a ,b;
        cin >> a;
        cout << a << endl;
    }
    void print()
    {  string c; 
        cin >> c;
        cout << c << endl; 
    }
    
};
int main()
{

    printdata pwd ;
    pwd.print();
    pwd.print();
    return 0;
}