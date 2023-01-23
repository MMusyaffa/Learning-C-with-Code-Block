#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *aPTR = &a; //&a untuk mengetahui alamat dari a
    int *bPTR = nullptr; //nullptr untuk menampilkan alamat kosong

    //Pointer
    cout << "nilai a: " << a << endl; //Menampilkan nilai dari a
    cout << "alamat dari a: " << aPTR << endl; //Menampilkan alamat dari a
    cout << "alamat kosong : " << bPTR << endl; //Menampilkan alamat kosong yang tidak ada apa apa

    //Deferencing (Mengambil data dari sebuah pointer)
    cout << "mengambil dari pointer a: " << *aPTR << endl; //Mengambil lagi nilai yang ada di alamat atau pointer

    return 0;
}
