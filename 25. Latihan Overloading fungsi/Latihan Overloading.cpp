#include <iostream>

using namespace std;

//Basic function
int luas_kotak (int panjang, int lebar){ //untuk basic fungsinya atau dasar
    int luas = panjang * lebar;
    return luas;
}

//Overloading Function
int luas_kotak (int sisi){ //Tumpukan fungsinya agar nanti program memilih sendiri
    int luas = sisi * sisi;
    return luas;
}

double luas_kotak (double sisi){
    return sisi * sisi;
}

double luas_kotak (double sisi1, double sisi2){
    return sisi1 * sisi2;
}

int main()
{
    cout <<" Luas kotak dari 3x7 : " << luas_kotak(3,7) << endl; //Program otomatis memilih paling atas karena tipe data masukannya integer dan ada dua
    cout <<" Luas kotak dari 3x3 : " << luas_kotak(3) << endl; //Program otomatis memilih nomor dua karena masukannya hanya satu dan bersifat integer
    cout <<" Luas kotak dari 3,1x3,1 : " << luas_kotak(3.1) << endl; //Program otomatis memilih yang ke tiga karena tipe datanya double dan inputannya satu
    cout <<" Luas kotak dari 1,7x8,4 : " << luas_kotak(1.7,8.4) << endl; //Program otomatis memilih yang ke empat karena tipe datanya double dan masukannya dua

    return 0;
}
