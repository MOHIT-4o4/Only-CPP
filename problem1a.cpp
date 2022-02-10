#include<iostream>

using namespace std;

int main(){
    int t,n,newv;
    int c1,c2 ;
    cout <<"Enter :";
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n;
}
    if(n%3==0){
        c1  = n/3;
        c2 = 2*(n/3);
    }
    else {
        newv = n%3;
        c1  = n/3 + newv;
        c2= 2*(n/3);
    }

        cout <<c1<<" "<<c2;
    
    return 0;
}