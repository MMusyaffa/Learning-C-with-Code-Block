#include <iostream>
#include <string>

using namespace std;

struct perusahaan{
    string nama;
    string jabatan;
    float nomor_pegawai;
};

int main(){
    perusahaan Gogreen;

    Gogreen.nama =" Khalid Musyaffa";
    Gogreen.jabatan =" HRD";
    Gogreen.nomor_pegawai = 105.221;

    cout <<" Perusahaan GoGreen Indonesia" << endl;
    cout <<" Nama: " << Gogreen.nama << endl;
    cout <<" Posisi: " << Gogreen.jabatan << endl;
    cout <<" No.Pegawai: " << Gogreen.nomor_pegawai << endl;

    cin.get();
    return 0;
}
