/*引用：直接动原对象，避免大对象复制需要额外空间
还可以作为指针传参的平替(引用传参)

引用适合绑定单一对象，指针可以改变所指对象
*/
#include <iostream>
using namespace std;

bool odd_add(int a,int b,int &c);

int main(){
    int a,b,c=0;
    cin >> a >> b;
    cout << odd_add(a,b,c) << ' ' << c << endl;

    return 0;
}

bool odd_add(int a,int b,int &c){
    if(a%2 == 0 || b%2 == 0){
        return false;
    }else{
        c = a+b;
        return true;
    }
}