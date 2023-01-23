#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    fstream Fileku;
    int number = 1234;

    Fileku.open("data.bin", ios::out | ios::binary);

    Fileku.write(reinterpret_cast<char*>(&number),sizeof(number));

    Fileku.close();

    cin.get();
    return 0;
}
