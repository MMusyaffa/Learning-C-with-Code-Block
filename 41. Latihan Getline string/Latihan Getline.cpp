#include <iostream>
#include <string>

using namespace std;

int main(){
    string kalimat_input;
    cout <<" Masukan suatu kalimat: ";
    getline(cin, kalimat_input);
    cout <<" Kalimat yang anda masukan: " << kalimat_input << endl;

    //Menghitung jumlah kata dari yang kita inputkan
    int jumlah = 0;
    int posisi = 0;

    while(true){
        posisi = kalimat_input.find(" ", posisi + 1);
        jumlah++;
        if (posisi<0){
            break;
        }
    }
    cout <<" Jumlah kata yang anda masukan ada: " << jumlah << endl;

    cin.get();
    return 0;
}
