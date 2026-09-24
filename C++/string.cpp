#include <iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    string s3=s1+s2;
    cout<<s3<<endl;
    string s4=s3.substr(2,4);
    cout<<s4<<endl;
    cout<<s4.length()<<endl;
}