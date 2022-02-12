#include <sstream>
#include <vector>
#include<string>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int temp;
    char c;
    vector<int> finalString;
    while(ss>>temp){
        temp.push_back(temp);
        ss>>c;
    }
    return finalString;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}