#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kal_1("Elon musk suka mobil");
    string kal_2("Saya mau punya Bugatti");

    cout <<" 1. " << kal_1 << endl;
    cout <<" 2. " << kal_2 << endl;

    //Substring (mengambil string yang ada ditengah-tengah) substr(index,panjang)
    cout << kal_1.substr(15,5) << endl;
    cout << kal_2.substr(15,7) << endl;

    //Mencari posisi dari substring (.find)
    cout <<" Posisi suka: ";
    cout << kal_1.find("suka") << endl;
    cout <<" Posisi Bugatti: ";
    cout << kal_2.find("Bugatti") << endl;

    int u = kal_1.find("u");
    cout << u << endl;
    cout << kal_1.find("u", u + 1) << endl;

    //Mencari posisinya dari belakang (.rfind)
    cout << kal_2.rfind("m") << endl;

    cin.get();
    return 0;

}
