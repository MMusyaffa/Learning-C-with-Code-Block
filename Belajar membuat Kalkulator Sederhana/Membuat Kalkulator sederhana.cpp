#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil; //Untuk memasukan angka dan hasil yang keluar bisa koma atau negatif
    char aritmatika;

    cout <<" Selamat Datang di Kalkulator Sederhana \n\n";

    //Untuk masukan user
    cout <<" Masukan angka pertama: ";
    cin >> a;
    cout <<" Pilih Operator +,-,/,*: " ;
    cin >> aritmatika;
    cout <<" Masukan angka kedua: ";
    cin >> b;

    if (aritmatika == '+')
    {
        hasil = a + b;
        cout <<"\nHasil Perhitungan: ";
        cout << a << aritmatika << b ;
        cout <<" = "<< hasil << endl;
    } else if (aritmatika == '-')
    {
        hasil = a - b;
        cout <<"\nHasil Perhitungan: ";
        cout << a << aritmatika << b ;
        cout <<" = "<< hasil << endl;
    } else if (aritmatika == '*')
    {
        hasil = a * b;
        cout <<"\nHasil Perhitungan: ";
        cout << a << aritmatika << b ;
        cout <<" = "<< hasil << endl;
    } else if (aritmatika == '/')
    {
        hasil = a / b;
        cout <<"\nHasil Perhitungan: ";
        cout << a << aritmatika << b ;
        cout <<" = "<< hasil << endl;
    } else
    {
        cout <<" \n Operator yang anda pilih Salah!!!!"<< endl;
    }

    return 0;
}
