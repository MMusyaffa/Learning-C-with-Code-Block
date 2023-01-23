#include <iostream>

using namespace std;

int main()
{
    int k;

    cout << "Masukan Angkamu : ";
    cin >> k;

    //If Statement
    if (k >= 90) //jika angka lebih dari atau 90 maka TRUE
    {
        cout << "Selamat angka anda diatas 90" << endl; //Ini yang akan jalan
    } else if (k == 7) //Jika angka =7  maka ini yang akan jalan
    {
        cout << "Angka yang anda masukan adalah 7" << endl;
    } else if ( k >= 40 and k <= 70) //Jika angka yang dimasukan 40 diantara 40-70 maka ini yang akan jalan
    {
        cout << "Angka yang anda masukan diantara 40-70" << endl;
    } else //Jika angka yang dimasukan tidak sesuai dengan yang diatas
    {
        cout << "Angka yang anda masukan tidak sesuai dengan syarat" << endl; //Ini yang akan jalan
    }
    return 0;

}
