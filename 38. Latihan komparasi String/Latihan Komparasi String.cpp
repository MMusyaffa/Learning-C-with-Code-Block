#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Melakukan perbandingan string
    string input;
    string nama_rahasia("gilang");

    while(true){
        cout <<" tebak nama: ";
        cin >> input;
        if(nama_rahasia==input){
            cout <<" Nama yang ditebak benar " << endl;
            break;
        }
        cout <<" Nama yang ditebak salah " << endl;
    }
    cout <<" Program selesai " << endl;

    cin.get();
    return 0;
}

