#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myfile;
    int hasil;
    myfile.open("data.bin", ios::in | ios::binary);
    myfile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    cout <<" Besar integer: " << sizeof(hasil) <<" dalam byte, satu byte 8 bit maka int punya 32 bit" << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}
