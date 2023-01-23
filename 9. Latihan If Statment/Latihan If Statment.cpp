#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukan angka : ";
    cin >> a;

    //If Statment
    if (a == 70)
    {
        cout << "Angkanya sudah benar yey" << endl;
    }

    if (a > -1000)
    {
        cout << "YEEYYY BERHASIL TETAP SEMANGAT YA" << endl; //jika memasukan angka lebih dari -1000 maka akan jalan ini saja, tapi
                                                             //jika 70 yg dimasukan maka akan dua duanya
    }

    cout << "Sudah" << endl;
    return 0;
}
