#include <iostream>

using namespace std;

int main()
{
    //Increment ada 2 PreIncrement dan PostIncrement
    //Decrement ada 2 PreDecrement dan PostDecrement

    int a = 7; //a++ => a = a + 1
    int b = 7; //a-- => a = a - 1
    int v = 4;
    int z = 4;

    //PostIncrement
    cout << a << endl; //Menampilkan nilai a awal
    cout << a++ << endl; //Menampilkan a dahulu baru dijumlah makannya tidak berubah nilai a nya
    cout << a << endl << endl; //Menampilkan a yang sudah dijumlahkan makannya nilainya bertambah

    //PreIncrement
    cout << b << endl; //Menampilkan nilai b awal
    cout << ++b << endl; //Nilai b dijumlahkan dahulu lalu baru diprint makannya disini sudah bertambah nilainya
    cout << b << endl << endl; //Menampilkan nilai b yang sudah di print

    //PostDecrement
    cout << v << endl; //Menampilkan nilai awal v
    cout << v-- << endl; //Memprint v dahulu baru mengurangi sehingga v yg diprint tidak berkurang nilainya
    cout << v << endl << endl; //Memprint v yang sudah dikurang maka nilainya berubah

    //PreDecrement
    cout << z << endl; //Menampilkan nilai awal z
    cout << --z << endl; //Mengurangi z dahulu baru memprint z nah disini nilai z berkurang
    cout << z << endl << endl; //Menampilkan nilai z yang sudah dikurang

    return 0;
}
