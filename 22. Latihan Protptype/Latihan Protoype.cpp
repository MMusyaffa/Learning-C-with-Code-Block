#include <iostream>

using namespace std;

double hit_luas (double p, double l); //Prototype untuk menjabarkan fungsi luas
void print (double z); //Protorype untuk menjabarkan perintah print

int main()
{
    double panjang, lebar, hasil;
    cout <<" Masukin panjang : ";
    cin >> panjang;
    cout <<" Masukin lebar : ";
    cin >> lebar;

    hasil = hit_luas (panjang, lebar);
    print(hasil);
}

double hit_luas (double p, double l){ //Penjabaran dari prototype luas yang di atas
    return p * l;
}

void print (double z){ //Penjelasan dari prototype untuk menampilkan hasil
    cout <<" Hasil: " << z << endl;
}
