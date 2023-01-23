#include <iostream>
#include <array> //Standard Library untuk array di C++

using namespace std;

int main()
{
    // Array <tipe data, jumlah array> nama array;
    array <int, 5> nilai;

    for (int i=0; i<=4; i++){ //Looping untuk menampilkan array urut
        nilai[i]=i; //i dimulai dari 0, maka nilai[0]=0 bertambah terus sampai i=4
        cout <<" Nilai[" << i <<"] = " << nilai[i]; //Menampilkan i=0 sampai i=4 dan nilai[0] sampai nilai[4]
        cout <<" Address: " << &nilai[i] << endl;
    }

    cout << endl;

    //Ukuran array
    cout <<" Ukuran array: " << nilai.size() << endl;
    //Address index pertama
    cout <<" Address index pertama: " << nilai.begin() << endl;
    //Address index terakhir
    cout <<" Address index terakhir: " << nilai.end() << endl;
    //Menampilkan nilai yang diingin
    cout <<" Nilai index ke 4: " << nilai.at(4) << endl;

    return 0;
}
