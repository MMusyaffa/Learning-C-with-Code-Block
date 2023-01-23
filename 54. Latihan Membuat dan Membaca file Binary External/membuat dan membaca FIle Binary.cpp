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

Mahasiswa ambilData (int posisi, fstream &myFile){
    Mahasiswa bufferData;

    myFile.seekp((posisi-1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));

    return bufferData;
}

void menulisData (Mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data),sizeof(Mahasiswa));
}

void editDatabyPos(int posisi, Mahasiswa &bufferData, fstream &myFile){
    myFile.seekg((posisi-1)*sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
}

int main(){
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 11;
    mahasiswa1.Nama = "Rama";
    mahasiswa1.Jurusan = "Manajemen";
    mahasiswa1.Prodi = "Bisnis";

    mahasiswa2.NIM = 12;
    mahasiswa2.Nama = "rama";
    mahasiswa2.Jurusan = "Pertanian";
    mahasiswa2.Prodi = "Lingkungan";

    mahasiswa3.NIM = 13;
    mahasiswa3.Nama = "Kura";
    mahasiswa3.Jurusan = "Akuntan";
    mahasiswa3.Prodi = "Keuangan";

    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);

    mahasiswa2.Nama = "Jane";
    editDatabyPos(2, mahasiswa2, myFile);

    output = ambilData(1, myFile);

    cout << output.NIM << endl;
    cout << output.Nama << endl;
    cout << output.Jurusan << endl;
    cout << output.Prodi << endl;

    myFile.close();
    cin.get();
    return 0;
}
