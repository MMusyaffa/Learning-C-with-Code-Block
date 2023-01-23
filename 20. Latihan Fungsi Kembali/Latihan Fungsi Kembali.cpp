#include <iostream>

using namespace std;

//Fungsi untuk mengkuadratkan bilangan
int kuadrat(int x)
{
    int y;
    y = x * x;

    return y;
}

//Fungsi untuk menghitung luas persegi panjang
float ppanjang(float a, float b)
{
    float c;
    c = a * b;

    return c;
}

//Fungsi utama
int main()
{
    int hasil_1, input;
    float hasil_2, panjang, lebar;

    cout <<" Masukan bilangan yang akan dikuadratkan : ";
    cin >> input;
    hasil_1 = kuadrat(input);
    cout <<" Nilai kuadratnya adalah: " << hasil_1 << endl;

    cout <<" Masukan panjang: ";
    cin >> panjang;
    cout <<" Masukan lebar: ";
    cin >> lebar;
    hasil_2 = ppanjang(panjang, lebar);
    cout <<" Luas persegi panjangnya adalah: " << hasil_2 << endl;

    return 0;
}
