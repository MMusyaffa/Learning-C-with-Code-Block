#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10; //Untuk membuat tetap panjang array adalah 10

//kelas untuk menampilkan int angka
void printArray (array <int, arraySize> &angka){
    cout <<" Angka: ";
    for (int &a : angka){
        cout << a <<" ";
    }
    cout << endl;
}

//Kelas untuk menampilkan char angka
void printArray (array <char, arraySize> &huruf){
    cout <<" Huruf: ";
    for (char &a : huruf){
        cout << a <<" ";
    }
    cout << endl;
}

int main()
{
    array <int, arraySize> angka = {3,2,4,5,1,7,6,8,9,0};
    array <char, arraySize> huruf = {'a','r','s','w','t','j','l','q','o','m'};

    printArray(angka);
    printArray(huruf);

    cout << endl;

    sort(angka.begin(), angka.end()); //Untuk mengurutkan angka dengan algoritma
    printArray(angka);

    sort(huruf.begin(), huruf.end()); //Untuk mengurutkan huruf dengan algortima
    printArray(huruf);

    cin.get();
    return 0;
}
