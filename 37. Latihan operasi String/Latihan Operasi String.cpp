#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata("Rosessions"); //Membuat string kata
    cout << kata << endl; //Menampilkan string kata

    //Mengambil karakter yang ada diString
    cout <<" Index ke 0: " << kata[0] << endl;
    cout <<" Index ke 3: " << kata[3] << endl;
    cout <<" Index ke 6: " << kata[6] << endl;

    //Merubah karatket yang ada pada String
    kata[1] = 'u'; //Ketika mengubah harus pakai char
    cout << kata << endl;

    //Menyambung atau concatenation
    string kata2 (kata + " jaya");
    cout << kata2 << endl;

    string kata3 ("selamanya");
    kata2.append(" " + kata3);
    cout << kata2 << endl;

    string kata4 ("ahay!!");
    kata2 += " " + kata4;
    cout << kata2 << endl;

    cin.get();
    return 0;

}
