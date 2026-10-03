#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int x=70;
    bitset <8> b(x);
    cout << b << endl;

    cout << b.any() << endl;
    cout << b.none() << endl;
    cout << b.count() << endl;
    cout << b.size() << endl;
    cout << b.test(0) << endl;

    b.flip();
    cout << b << endl;

    b.reset(0);
    cout << b << endl;
    b.set(0);
    cout << b << endl;

    return 0;
}