#include <iostream>

using namespace std;

//Dikirim dengan alamat(deReferencing) lalu diterima sebagai pointer, nah jika diambil nilainya akan muncul alamatnya, namun jika dipanggil pointernya akan keluar nilainya

//Berguna untuk mengubah nilai variabel yang tidak akan digunakan lagi sehingga tidak ada return

//Prototype untuk fungsi fungsi
void fungsi (int *); //Mau hanya bintang atau ditambah dengan nama variabel jg boleh
void kuadrat (int *); //Mengalikan nilai dari pointer a
void tambah (int *); //Menambahkan nilai dari pointer a
void kurang (int *); //Mengurangkan dengan (a - 18)
void bagi (int *); //Membagi dengan (a/2)

int main()
{
    int a = 5;

    cout <<" address dari a: " << &a << endl; //Menampilkan alamat dari a
    cout <<" Nilai dari a: " << a << endl; //Menampilkan nilai dari a

    fungsi(&a); //Memanggil fungsi dengan inputan pointer dari a DAN (&a ARTINYA DEREFERENCING)

    kuadrat(&a); //Memanggil kuadrat dengan inputan pointer a
    cout <<" Nilai dari kuadrat = " << a << endl; //Menampilkan nilai a yang baru

    tambah(&a); //Memanggil tambah dengan inputan dari a yang sudah masuk dari fungsi (a nya sudah berubah)
    kurang(&a); //Memangil kurang lalu dimasukan a yang sudah masuk dari fungsi tambah
    bagi(&a); //Memanggil fungsi bagi lalu memasukan a yang sudah masuk fungsi kurang


    cin.get();
    return 0;
}

void fungsi (int *b){ //Pointer dari a masuk, dan membuat pointer b dan a jadi sama jadi jika alamat b dipanggil maka alamatnya sama dengan a, begitu juga nilainya
    cout <<"\n address dari b yang beda: " << &b << endl; //Memanggil alamat dari b //JIKA MEMAKAI &b AKAN MENGGUNAKAN ALAMAT YANG BEDA NAMUN NILAI SAMA
    cout <<"\n address dari b yang satu pointer dengan a : " << b << endl; //Jika Pointer, yang dipanggil variabelnya maka kluar alamat
    cout <<" Nilai dari b: " << *b << endl; //Menampilkan nilai dari b dengan cara diberi (*) //Jika pointer, ketika dipanggil pointer akan kluar nilai
}

void kuadrat (int *valPtr){ //Pointer a masuk
    *valPtr = (*valPtr) * (*valPtr); //Lalu nilai dari pointer a diubah dan dikalikan lalu nilainya dipanggil lagi dan berubah
    cout <<" address dari (valPtr) yang satu pointer dengan a : " << valPtr << endl; //Menampilkan address dari (*valPtr) apakah sudah sama dengan a
}

void tambah (int *tam){ //Memasukan pointer a lalu mengambil nilai yang barunya yakni 25 lalu saling di tambahkan
    *tam = (*tam) + (*tam); //Menampilkan address dari (*tam) apakah sudah sama dengan a
    cout <<" address dari (tam) yang satu pointer dengan a : " << tam << endl;
    cout <<" Nilai a yang baru (a+a) = " << *tam << endl; //Menampilkan hasil dari a yang sudah berubah dari fungsi lalu ditambahkan dan dikeluarkan hasilnya
}

void kurang (int *kur){ //Pointer a masuk, dimana a sudah berubah lalu (a-18)
    *kur = (*kur) - 18;
    cout <<" Nilai dari a jika (a-18) = " << *kur << endl;
}

void bagi (int *bagi){ //Pointer a masuk, lalu dibagi 2 (a/2)
    *bagi = (*bagi) / 2;
    cout <<" Nilai dari a jika (a/2) = " << *bagi << endl;
}
