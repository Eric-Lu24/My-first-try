#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string,int> m;
    m["num"] = 1;
    m["age"] = 18;

    cout << "age:" << m["age"] << endl;
    cout << endl;

    for(auto p=m.begin();p!=m.end();p++){
        cout << p->first << ":" << p->second << endl;
    }
    cout << m.size() << endl;
    return 0;
}