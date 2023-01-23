#include <iostream>
#include <string>

using namespace std;

//kondisi(tenary operator) ? hasil1(true) : hasil2(false)

int main()
{
    int a,b;
    string kondisi1,kondisi2,hasil;


    kondisi1 = "hahaha";
    kondisi2 = "hayolo";
    cout <<" Akan keluar hahaha saat a>b dan a<b akan keluar hayolo" << endl;

    cout <<" Masukan angka (a): ";
    cin >> a;
    cout <<" Masukan angka (b): ";
    cin >> b;

    hasil = (a>b) ? kondisi1 : kondisi2;

    cout << hasil << endl;

    cin.get();
    return 0;
}
