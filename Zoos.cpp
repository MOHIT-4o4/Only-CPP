#include<iostream>
#include<string>
using namespace std;

int main(){
    string w;
    cin >>w;
    int zc=0,oc=0;
    for (auto i:w){
        if(w[i]=='o'||w[i]=='O'){
            oc++;
        }
        else if(w[i]=='Z' || w[i]=='z'){
            zc++;
        }
    }
    if(zc==2*oc){
        cout <<"Yes"<<endl;
    }
    else cout<<"No";
    return 0;
}