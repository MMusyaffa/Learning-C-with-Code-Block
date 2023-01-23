#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct  Mahasiswa {
    int NIM;
    string Nama;
    string Jurusan;
    string Prodi;
};

int main(){
    fstream myFile;
    Mahasiswa dataBaca;

    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&dataBaca),sizeof(Mahasiswa));

    cout << dataBaca.NIM << endl;
    cout << dataBaca.Nama << endl;
    cout << dataBaca.Jurusan << endl;
    cout << dataBaca.Prodi << endl;

    myFile.close();

    cin.get();
    return 0;
}
