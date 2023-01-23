#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout <<" Kalkulator Sederhana V2 \n Dengan Switch Case"<< endl;

    //Inputan User
    cout <<"\n Masukan Angka pertama: ";
    cin >> a;
    cout <<" Pilih Operator: ";
    cin >> aritmatika;
    cout <<" Masukan Angka Kedua: ";
    cin >> b;

    switch (aritmatika)
    {
    case '+': //Pemilihan tanda tambah (+)
        hasil = a + b;
        cout <<"\n Hasil : " << a << aritmatika << b <<" = "<< hasil << endl;
        break;

    case '-': //Pemilihan tanda kurang (-)
        hasil = a - b;
        cout <<"\n Hasil : " << a << aritmatika << b <<" = "<< hasil << endl;
        break;

    case '*': //Pemilihan tanda kali (*)
        hasil = a * b;
        cout <<"\n Hasil : " << a << "x" << b <<" = "<< hasil << endl;
        break;

    case '/': //Pemilihan tanda bagi(/)
        hasil = a / b;
        cout <<"\n Hasil : " << a << aritmatika << b <<" = "<< hasil << endl;
    }

    return 0;
}
