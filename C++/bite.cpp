#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a=100;
    int n=0;
    cin>>n;
    cout<<bitset<16>(a)<<endl;
    int b=a<<(16-n);
    int c=a>>n;
    c=c|b;
    cout<<bitset<16>(c)<<endl;
}