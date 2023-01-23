#include <iostream>
#include <string>

using namespace std;

struct penulis{
    string nama;
    int thn_lahir;
    string SoT;
};

struct pemeran{
    string nama;
    int thn_lahir;
};

struct film{
    string judul;
    int thn_rilis;
    string genre;

    pemeran aktor1;
    pemeran aktor2;
    pemeran produser;

    penulis song;
    penulis naskah;
};

int main()
{
    penulis songw, naskahf;
    pemeran pemeran1, pemeran2, produser;
    film prettyboys;

    //Buat Penulis
    songw.nama = "Pamungkas";
    songw.thn_lahir = 1993;
    songw.SoT = "I Love You But I`m Letting Go";
    naskahf.nama = "Imam Darto";
    naskahf.thn_lahir = 1982;

    //Buat Pemeran
    pemeran1.nama = "Mahendra Desta";
    pemeran1.thn_lahir = 1977;
    pemeran2.nama = "VIncent Rompies";
    pemeran2.thn_lahir = 1980;
    produser.nama = "Dr. Tompi";
    produser.thn_lahir = 1978;

    //Buat Film
    prettyboys.judul = "Pretty Boys";
    prettyboys.thn_rilis = 2019;
    prettyboys.genre = "Komedi";

    prettyboys.aktor1 = pemeran1;
    prettyboys.aktor2 = pemeran2;
    prettyboys.produser = produser;
    prettyboys.naskah = naskahf;
    prettyboys.song = songw;

    cout <<" Judul Film: " << prettyboys.judul << endl;
    cout <<" Tahun Rilis: " << prettyboys.thn_rilis << endl;
    cout <<" Bintang laga: " << prettyboys.aktor1.nama << " dan " << prettyboys.aktor2.nama << endl;
    cout <<" Produser: " << prettyboys.produser.nama << endl;
    cout <<" Penulis Naskah: " << prettyboys.naskah.nama << endl;
    cout <<" Sound Track: " << prettyboys.song.SoT << endl;
    cout <<" Penulis Lagu: " << prettyboys.song.nama << endl;

}
