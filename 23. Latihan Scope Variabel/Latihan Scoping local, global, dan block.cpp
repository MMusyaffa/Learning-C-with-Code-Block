#include <iostream>

using namespace std;

//Scoping Global, Lokal, Block

int x = 11; //Scope Global

int ambil_global(){ //Akan mengambil diatasnya alias Scope Global
    return x;
}

int x_local(){ //Akan mengambil x=5 ketika fungsi x_local dipanggil
    int x = 5; //Scope lokal dari fungsi x_local
    return x;
}

int main()
{
    cout <<" Variabel global " << x << endl; //Akan mengarah ke x yang paling atas
    int x = 7; //Scope lokal dari fungsi main
    cout <<" Variabel lokal " << x << endl; //X akan berubah karena ada variabel x baru jadi x yang di tampilkan x = 7
    cout <<" Variabel x_local " << x_local() << endl; //Memanggil fungsi x_local akan menghasilkan x = 5
    cout <<" Variabel ambil global " << ambil_global() << endl; //Memanggil fungsi ambil_global yang akan menghasilkan x = 11
    cout <<" Variabel lokal " << x << endl; //Tetap akan menampilkan x = 7
    {
        cout <<" Variabel lokal " << x << endl; //Tetap akan menampilkan x = 7
        int x = 2; //Scope blok dalam main
        cout <<" Variabel lokal block " << x << endl; //Akan menampilkan variabel x=2
        cout <<" Variabel global " << ::x << endl; //Akan menampilkan variabel paling atas (::X artinya unary)
    }
    cout <<" Variabel lokal " << x << endl; //Menampilkan x = 7 karena di luar blok

    return 0;
}
