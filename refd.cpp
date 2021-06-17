#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int  n;
cin>>n;
if(n%2!=0){
cout<<"Weird";
}
else
{
    if (2>=n>=5 || n>20){
        cout<<"Not Weird"<<endl;
    }
    else{
        cout<<"Weird";
    }   
}
    return 0;
}
