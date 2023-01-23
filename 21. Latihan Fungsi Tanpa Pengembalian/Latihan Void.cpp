#include <iostream>

using namespace std;

//Fungsi dengan Pengembalian
int kurang(int w, int z){
    int o;
    o = w - z;

    return o;
}

//Fungsi tanpa Pengembalian
void print(int tampil){
    cout <<" Tampilan dari Void ";
    cout << tampil << endl;
}

//Fungsi Utama
int main()
{
    int hasil, bil_1, bil_2;
    cout <<" Masukan bilangan pertama: ";
    cin >> bil_1;
    cout <<" Masukan bilangan kedua: ";
    cin >> bil_2;
    cout <<" Hasil pengurangan "<< bil_1 <<" - "<< bil_2 <<" adalah ";

    hasil = kurang(bil_1, bil_2);
    print(hasil);

    return 0;
}
