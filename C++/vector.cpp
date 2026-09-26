#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v(10);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.push_back(6);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector <int> v2(10,2);
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    v2.resize(20);
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    return 0;
}