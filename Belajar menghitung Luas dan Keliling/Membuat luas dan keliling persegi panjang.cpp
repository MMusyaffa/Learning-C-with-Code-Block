#include <iostream>

using namespace std;

//Menghitung Luas Persegi Panjang
double hitung_luas (double p, double l){ //fungsi untuk menghitung luas persegi panjang
    double luas = p * l; //inputannya berasal dari p dan l
    return luas;
}

//Menghitung keliling Persegi Panjang
double hitung_keliling (double p, double l){ //fungsi untuk menghitung keliling persegi panjang
    double keliling = 2 * (p+l); //inputannya dari p dan l
    return keliling;
}

void tampil_luas (double p, double l){
    cout <<" Menampilkan dengan void \n";
    cout <<" Luas dari persegi panjang adalah : ";
    cout << hitung_luas(p,l) << endl;
}

void tampil_keliling (double p, double l){
    cout <<" Keliling dari persegi panjang adalah : ";
    cout << hitung_keliling(p,l) << endl;
}

//Menghitung luas segitiga
double luas_segitiga (double a, double t){
    double luas = a * t / 2;
    return luas;
}

//Menghitung keliling segitiga
double kel_segitiga (double s){
    double keliling =  3 * s;
    return keliling;
}

void tamp_luas_segitiga (double a, double t){
    cout <<" Menampilkan dengan void \n";
    cout <<" Luas segitiganya : ";
    cout << luas_segitiga(a,t) << endl;
}

void tamp_kel_segitiga (double s){
    cout <<" Keliling segitiganya : ";
    cout << kel_segitiga(s) << endl;
}

//Menghitung luas persegi
double luas_persegi (double ru){
    double luas =  ru * ru;
    return luas;
}
//Menghitung keliling persegi
double kel_persegi (double ru){
    double kelliling = 4 * ru;
    return kelliling;
}

void tamp_luas_persegi (double ru){
    cout <<" Menampilkan dengan void \n";
    cout <<" Luas perseginya : ";
    cout << luas_persegi(ru) << endl;
}

void tamp_kel_persegi (double ru){
    cout <<" Keliling perseginya : ";
    cout << kel_persegi(ru) << endl;
}

//Menghitung luas lingkaran
double luas_lingkaran (double r){
    double luas = 3.14 * r * r;
    return luas;
}

//Menghitung keliling lingkaran
double kel_lingkaran (double r){
    double keliling = 2 * 3.14 * r;
    return keliling;
}

void tamp_luas_lingkaran (double r){
    cout <<" Menampilkan dengan void \n";
    cout <<" Luas lingkarannya : ";
    cout << luas_lingkaran(r) << endl;
}

void tamp_keliling_lingkaran (double r){
    cout <<" Keliling lingkarannya : ";
    cout << kel_lingkaran(r) << endl;
}

int main()
{
    double panjang, lebar, alas, tinggi, sisi, ru, jari;

    cout <<" Persegi panjang \n";
    cout <<" Masukan panjangnya: ";
    cin >> panjang;
    cout <<" Masukan lebarnya: ";
    cin >> lebar;

    cout <<"\n Segitiga \n";
    cout <<" Masukan tingginya: ";
    cin >> tinggi;
    cout <<" Masukan alasnya: ";
    cin >> alas;
    cout <<" Masukan sisinya: ";
    cin >> sisi;

    cout <<"\n Persegi \n";
    cout <<" Masukan panjangnya: ";
    cin >> ru;

    cout <<"\n Lingkarang \n";
    cout <<" Masukan jari-jarinya: ";
    cin >> jari;

    cout <<"\n Persegi panjang \n";
    tampil_luas(panjang, lebar);
    tampil_keliling(panjang, lebar);

    cout <<"\n Segitiga \n";
    tamp_luas_segitiga(alas, tinggi);
    tamp_kel_segitiga(sisi);

    cout <<"\n Persegi \n";
    tamp_luas_persegi(ru);
    tamp_kel_persegi(ru);

    cout <<"\n Lingkarang \n";
    tamp_luas_lingkaran(jari);
    tamp_keliling_lingkaran(jari);

    return 0;
}
