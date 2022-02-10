#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    int n=5,d,i;
    int arr[n];
    cout << "Vector1 Starts from :";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << " " << *it;
    cout << "\nREVERSE: ";
    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        cout << " " << *i;
    }
    vector<int> v;
    v.assign(5,10);
    // v.assign(2,20);
    cout <<"\nASSIGN: ";
    for (i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    v.push_back(15);
    cout <<"\nPush BAck: "<<v[i];
    // v.insert(v.begin(),123);
    v.insert(v.begin(),23);
    cout <<"\nBegin: "<<v[0];
    v.emplace(v.begin(),2);
    cout<<"\ninserted(emplace) at begin: "<<v[0];
    // v.clear();
    // clear vector
    cout <<"\nAFTER VECTOR2: ";
    for (i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    v.clear();
    vec.clear();
    vector<int> v1,v2;
    v1.assign(2,22);
    v2.assign(3,33);
    cout <<"\nVector3: ";
    for (i=0;i<v1.size();i++){
        cout <<v1[i]<<" ";
    }
    cout <<"\nVector4: ";
    for (i=0;i<v2.size();i++){
        cout <<v2[i]<<" ";
    }
    v1.swap(v2);
    cout <<"\nAFTER Swap Vector3:";
    for (i=0;i<v1.size();i++){
        cout <<v1[i]<<" ";
    }
    cout <<"\nAFTER Swap Vector4:";
    for (i=0;i<v2.size();i++){
        cout <<v2[i]<<" ";
    }
    v1.clear();
    v2.clear();
    cout <<"\n\n";
    vector<int> data;
    for(i=0;i<5;i++){
        cin>>d;
        data.push_back(d);
    }
    cout <<"Taking user input in Vector: ";
    for(i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}