#include<iostream>
using namespace std;

int main(){
    int i,t,x,y;
    cin >>t;
    while(t--){
        cin>>x>>y;
     
            if(x==0 && y%2==0){
                cout<<"YES"<<endl;
            }
            else if(x==0 && y%2!=0){
                cout<<"NO"<<endl;
            }
            else if((x+2*y)%2==0){
                cout <<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        
    }
    return 0;
}