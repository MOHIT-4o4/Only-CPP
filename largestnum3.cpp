#include<iostream>

using namespace std;
int main()
{
    int n1,n2,n3,greatest;
    cout << "Enter the three value to find greatest b/t them ";
    cin >> n1 >>n2 >>n3 ;
    if (n1>n2 && n1>n3)
    {
        cout <<n1 << "is greatest number";
    }
    if (n2>n1 && n2>n3)
    {
        cout << n2 << "is the greatest number";
    }
    if (n3>n1 && n3>n2)
    {
        cout << n3 << "is the greatest number";
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;

}
