#include<iostream>
using namespace std ;
int main()
{
    int num,sum=0,i;
    cout << "enter a positive number";
    cin >> num;
    for(i=1;i<=num;i++)
    {
        sum = sum+i;
    }
    cout << "The sum of all positive number till "<< num << " is " << sum ;
    return 0;

}
