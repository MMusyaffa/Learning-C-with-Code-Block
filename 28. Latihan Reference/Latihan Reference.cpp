#include <iostream>

using namespace std;

int main()
{
    int a = 6; //Nilai dari a=6

    cout <<" Nilai dari a: " << a << endl;
    cout <<" Address dari a: " << &a << endl; //Akan menampilkan address dari a

    int &b = a; //Membuat b satu memory dengan a
    cout <<" Nilai dari b: " << b << endl; //Akan menampilkan nilai yang sama dengan a karena sudah satu alamat
    cout <<" Address dari b: " << &b << endl; //Menampilkan alamat dari b

    b = 19; //Cek apakah sudah sama satu alamat
    cout <<" Nilai dari a: " << a << endl; //akan menampilkan nilai dari a yang sudah diubah
    cout <<" Nilai dari b: " << b << endl; //akan menampilkan nilai dari b yang sudah diubah

    a = 77; //Cek apakah nilainya masih sama ketika satu alamat
    cout <<" Nilai dari a: " << a << endl; //akan menampilkan nilai dari a yang sudah diubah
    cout <<" Nilai dari b: " << b << endl; //akan menampilkan nilai dari b yang sudah diubah


    return 0;
}
