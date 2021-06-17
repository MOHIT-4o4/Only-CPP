#include<iostream>
using namespace std;
int main()
{
    int q1,q2,lcm;
    cout << "Enter the two number\n";
    cin >>q1>>q2;

    if (q1>q2)
    {
        lcm=q1;
    }
    else
    {
        lcm=q2;
    }
    while(1)
    {
        if (lcm%q1==0 && lcm%q2==0)
        {
            cout << lcm;
            break;
        }
      lcm++;
    }
    return 0;
}
