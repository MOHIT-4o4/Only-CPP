// #include<iostream>
// using namespace std;

// int main(){
//     int i , choice ,fact =1 ;
    
//     cout << "Enter the number:";
//     cin >> choice ;

//     for(i=1;i<=choice;i++){
//         fact = fact *i ;

//     }
//     cout<< fact ; 
    
// }
#include<iostream>
#include"tool.h"

int main(){

    FILE *f;
    f = fopen("too1.txt","r");
    if(f){
        while(!EOF(f))
        {
            
        }
        
    }
    print();
    return 0;
}