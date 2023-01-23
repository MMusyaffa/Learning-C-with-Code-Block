#include <iostream>

using namespace std;

int main()
{
    int a = 4;

    while (a < 11) //Ketika variabel memenuhi syarat maka aksi jalan
    {
        cout <<" Nomor "; //Aksi yang akan jalan ketika syarat terpenuhi
        cout << a << endl; //Nilai a waktu itu juga
        a++; //a akan di jumlahkan dengan 1, agar menjadi false biar ga looping terus
    }


    return 0;
}
