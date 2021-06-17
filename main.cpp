#include<iostream>
using namespace std;

int main(){
    int i , choice ,fact =1 ;
    
    cout << "Enter the number:";
    cin >> choice ;

    for(i=1;i<=choice;i++){
        fact = fact *i ;

    }
    cout<< fact ; 
    
}