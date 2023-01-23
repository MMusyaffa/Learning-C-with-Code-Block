#include <iostream>
#include <bitset>

using namespace std;

void Tampil(unsigned short val, string nama){
    cout << nama <<" = "<< bitset<8>(val) << endl;
}

int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout <<"\n >> - Bitwise Shift Right" << endl;
    c = a >> 1;
    Tampil(a,"a");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cout <<"\n << - Bitwise Shift Left" << endl;
    c = a << 1;
    Tampil(a,"a");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cout <<"\n ~ - Bitwise NOT" << endl;
    c =  ~ a;
    Tampil(a,"a");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cout <<"\n ^ - Bitwise XOR" << endl;
    c = a ^ b;
    Tampil(a,"a");
    Tampil(b,"b");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cout <<"\n | - Bitwise OR" << endl;
    c = a | b;
    Tampil(a,"a");
    Tampil(b,"b");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cout <<"\n & - Bitwise AND" << endl;
    c = a & b;
    Tampil(a,"a");
    Tampil(b,"b");
    Tampil(c,"c");
    cout << "c= " << c << endl;

    cin.get();
    return 0;
}
