#include <iostream>

using namespace std;

//ada operator aritmatika adalah tambah(+), kurang(-), kali(*), bagi(/), dan modulo(%)

int main()
{
    int a = 5;
    int b = 3;
    float c = 9;
    int hasil;

    //Penjumlahan
    cout << a + b << endl; //cara sederhana

    hasil = a + b; //cara yang lebih detail
    cout << a <<" + "<< b <<" = "<< hasil << endl;

    //Pengurangan
    hasil = a - b; //cara yang lebih detail
    cout << a <<" - "<< b <<" = "<< hasil << endl;

    //Perkalian
    hasil = a * b; //cara yang lebih detail
    cout << a <<" x "<< b <<" = "<< hasil << endl;

    //Pembagian
    hasil = a / b; //cara yang lebih detail
    cout << a <<" / "<< b <<" = "<< hasil << endl;

    //Modulo
    hasil = a % b; //cara yang lebih detail
    cout << a <<" % "<< b <<" = "<< hasil << endl;

    //modulo tidak bisa bekerja jika tipe data yg dioperasikan berbeda
    //jika mau dapat angka koma maka pakai float dan pastikan hasilnya juga float

    //Urutan pengoperasian
    //Dalam urutan kali,bagi dahulu baru tambah,kurang
    hasil = a + c * b; //cara yang lebih detail
    cout << a <<" + "<< c <<" * "<< b << " = "<< hasil << endl;

    //jika ada yang dalam kurung kerjakan yang dikurung dahulu
    hasil = (a + c) / 7;
    cout <<"("<< a <<" + "<< c <<")"<<" / "<< 7 <<" = "<< hasil <<endl;

    return 0;
}

