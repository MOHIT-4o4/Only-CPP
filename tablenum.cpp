#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout << "Enterr the number \n";
    cin >> num;
    for(i=1;i<=10;i++)
    {
        num*i;
    }
    cout << "table of the number is"<<endl;
    for(i=1;i<=10;i++)
    {
        cout << num*i<< endl ;
    }
    return 0;

}
