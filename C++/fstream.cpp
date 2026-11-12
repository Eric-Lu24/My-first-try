#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile("fstream.txt",ios::app);//ios::app以追加模式写入文件(不清空原有内容)
    if (!outfile) {
        cerr << "None!" << endl;
        return 1;
    }

    string sAdd;
    getline(cin,sAdd);
    outfile << sAdd << endl;

    outfile.close();
    if (!outfile) {
        cerr << "Error!" << endl;
        return 1;
    }else{
        cout << "Completed!" << endl;
    }

    return 0;
}