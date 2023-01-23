#include <iostream>

using namespace std; //agar tidak usah mengetik panjang2 lagi std::cout atau std::endl

int main()
{
    //belajar deklarasi
    int a; //ini merupakan sebuah deklarasi
    a = 7; //ini adalah nilai dari sebuah deklarasi a
    cout << a << endl; //nahkan tidak ngetik panjang karna sudah pake using namespace std;


    //yuk buat agar kita bisa memasukan nilai deklarasinya agar tidak usah mengubah lewat kode
    int z; //ini mendeklarasikan bahwa z itu integer
    cout <<"Masukan nilainya : "; //mengconsole out Masukan Nilai
    cin >> z; //agar mengconsole in nilai z yang bersifat integer atau bilangan bulat
    cout <<"Anda memasukan nilai : "<< z << endl; //bisa juga ditulis gabung
    /*jika cin tandanya >>
    jika cout tandanya << */

    /*
    jika memasukan huruf maka nilai z akan 0 karna tidak ada angka yg dimasukan, kecuali kita mengubah z menjadi string maka bisa
    menampilkan huruf yang kita ketik bahkan bisa juga angka karna tipe string itu bebas
    jika kita mengetikan angka dengan huruf yang akan ditampilkan tetap angka karna z dideklarasi sebagai integer
    */

    cin.get(); //jika pake ini kudu enter dua kali baru bisa keluar dr program
    return 0;

}
