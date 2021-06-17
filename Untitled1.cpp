#include <iostream>
#include<cstdio>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s[] = {"HackerRank "};

    int i2;
    double d2;
    char s2[100];

    
    
    cin>>i2;
    
    cin>>d2;
    gets(s2);

    cout << i + i2 << endl;
    cout << d + d2 << endl;
    
    printf("%s",s);
    puts(s2);

    return 0;
}

