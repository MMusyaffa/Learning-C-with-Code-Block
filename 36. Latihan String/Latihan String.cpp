#include <iostream>
#include <string>

using namespace std;

int main()
{
    //String bisa dibuat seperti array
    //String tidak akan terbaca jika ada spasi
    char kata[4] = {'b','u','a','h'};
    //Array yang seperti diatas tidak bisa diubah atau di tambah
    cout << kata << endl;

    //Jika menggunakan standard library string
    string kata2 (" Mobil listrik buatan Elon adalah Tesla");
    cout << kata2 << endl;

    //Membuat inputan string
    string data;
    cout <<" Masukan kata yang ingin ditampilkan ";
    cin >> data;
    cout <<" kata yang dimasukan adalah: " << endl;
    cout << data << endl;

    cin.get();
    return 0;
}
