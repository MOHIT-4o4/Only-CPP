#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "Enter the number whose factor you wants to know\t";
    cin >> n;
    cout << "Factor of the number\n";
    for(i=1; i<=n; i++)
    {
        if (n%i==0)
        {
         cout << i << endl ;
        }
    }
    return 0;
}
