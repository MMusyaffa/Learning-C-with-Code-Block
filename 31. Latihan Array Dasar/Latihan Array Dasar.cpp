#include <iostream>

using namespace std;

int main()
{
    //Membuat array
    int nilai[6] = {1,0,2,4,11,7};

    cout << &nilai[0] <<" nilainya " << nilai[0] << endl;
    cout << &nilai[1] <<" nilainya " << nilai[1] << endl;
    cout << &nilai[2] <<" nilainya " << nilai[2] << endl;
    cout << &nilai[3] <<" nilainya " << nilai[3] << endl;
    cout << &nilai[4] <<" nilainya " << nilai[4] << endl;
    cout << &nilai[5] <<" nilainya " << nilai[5] << endl;

    //Mengubah nilai array
    int *ptr = nilai;
    *(ptr+2) = 6; //Mengubah nilai dengan cara menuju alamat pointer indek ke 0 lalu menambahkannya dengan 2 dan 2 lagi agar menuju alamat index ke 2
    nilai[4] = 82; //Mengubah nilai dengan cara mengubah nilai dari indec ke 4 dengan nilai 82

    cout << endl;
    cout << &nilai[0] <<" nilainya " << nilai[0] << endl;
    cout << &nilai[1] <<" nilainya " << nilai[1] << endl;
    cout << &nilai[2] <<" nilainya " << nilai[2] << endl;
    cout << &nilai[3] <<" nilainya " << nilai[3] << endl;
    cout << &nilai[4] <<" nilainya " << nilai[4] << endl;
    cout << &nilai[5] <<" nilainya " << nilai[5] << endl;

    //Mengambil ukuran dari array dan jumlah datanya
    cout << endl;
    cout <<" Ukuran array " << sizeof(nilai) <<" byte " << endl;
    cout <<" Jumlah dari array " << sizeof(nilai)/sizeof(int) << endl;

    return 0;
}
