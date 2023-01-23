#include <iostream>

using namespace std;

//Dikirim nilainya saja, lalu diterima sebagai reference maka ketika nilainya diambil akan keluar nilai. jika diambil alamatnya maka keluar alamatnya

//Prototype
void fungsi(int &);
void tambah(int &);
void kurang(int &);

int main()
{
    int a = 5;

    cout <<" Nilai dari a: " << a << endl;
    cout <<" Address dari a: " << &a << endl;

    fungsi(a); //Masuk nilai a ke fungsi

    tambah(a); //Masuk a setelah nilainya diubah oleh fungsi
    cout <<" Nilai a: " << a << endl; //Menampilkan a yang telah masuk ke tambah

    kurang(a); //Masuk a setelah dari tambah

    cin.get();
    return 0;
}

void fungsi(int &b){
    b = 11; //Mengubah nilai a
    cout <<" Nilai dari a (setelah masuk fungsi): " << b << endl; //Cek apakah alamatnya sama
    cout <<" Address dari a(setelah masuk fungsi) : " << &b << endl; //Cek apakah nilaimya sudah berubah atau belum
}

void tambah(int &tam){ //Setelah diubah nilainya oleh fungsi maka a akan saling menambahkan (a+a)
    tam = tam + tam;
}

void kurang(int &kur){
    kur = kur - 10; //Setelah a diubah oleh tambah, maka akan dikurang 10 (a-10)
    cout <<" Nilai a (setelah dari tambah lalu di kurang 10) : " << kur << endl; //Menampilkan a-10
}
