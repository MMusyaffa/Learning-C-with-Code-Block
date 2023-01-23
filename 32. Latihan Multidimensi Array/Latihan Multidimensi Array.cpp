#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for (int i=0; i<baris; i++){
        cout <<"[ ";
        for (int k=0; k<kolom; k++){
            cout << *(ptrArray + index) <<" ";
            index ++;
        }
        cout <<"]"<< endl;
    }
}

int main(){
//Array Multidimensi
//Array Baris dan Kolom

    const int baris = 2; //Memakai Konstan agar di baris dan kolomnya tidak terjadi error
    const int kolom = 3;
    int arrayMD [baris][kolom] = {1,4,2,9,5};

    printArray(*arrayMD, baris, kolom);

    cin.get();
    return 0;
}
