#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukan nilai : ";
    cin >> a;

    //Switch Case
    switch (a) //Pada switch case akan mengeksekusi semua yang ada maka dari itu harus pake break
    {
    case 1:
        cout << "a = 1" << endl;
        break; //biar gajalan programnya sampe bawah
    case 6:
        cout << "a = 6" << endl;
    case 3:
        cout << "a = 3" << endl;
    case 4:
        cout << "a = 4" << endl;
    case 100:
        cout << "a = 100" << endl;
    default: //jika tidak ada program yang sesuai akan menampilkan ini
        cout << "Tidak ada" << endl;
    }

    cout << "Akhir Program" << endl;
}

