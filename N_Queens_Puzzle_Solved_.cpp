#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        double x;
        cin>>n;
        x = pow((0.143*n),n);
        if((x - floor(x))<0.5){
            cout <<floor(x)<<endl;
        }
        else{
            cout <<floor(x)+1<<endl;
        }

    }
    return 0;
}