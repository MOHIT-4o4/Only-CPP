#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout << "Enter the number of rows\n";
    cin >> num;
    cout << "pattern\n";
    for(i=0;i<=num;i++)
    {
        for (j=0;j<i;j++)

         cout << "$";
         cout <<"\n";
    }
    return 0;
}
