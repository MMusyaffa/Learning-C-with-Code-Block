#include <iostream>

using namespace std;

//Prototype
int faktorial (int n);

//Membuat Faktorial
int main()
{
    int angka, hasil;

    cout <<" Faktorial dari: ";
    cin >> angka;

    hasil = faktorial(angka);
    cout <<"\n Nilai Faktorial dari: " << angka <<" adalah " << hasil << endl;

    return 0;
}

int faktorial (int n){ //Jika n sudah = 1 maka akan jalan if nya dan berhenti
    if (n<=1){
        cout << n;
        return n;
    }else{ //Jika angka=4 maka akan jalan else, lalu print 4 dan X, lalu masuk ke return n dan (4-1)=3 dan 3 cek ke atas 3 tidak sama dengan 1 maka akan print 3 dan X
        cout << n <<"x"; //lalu 3 masuk (3-1)=2, 2 ke atas,2 tidak sama dengan 1 maka akan print 2 dan X lalu masuk (2-1)=1, 1 ke atas dan 1<=1 maka akan print 1 dan berakhir
        return n * faktorial(n-1); //n=4 * faktorial(4-1)=3 maka 4*3=12, 12 return n. n=12 * faktorial(3-1)=2 maka 12*2=24. return n=24. n=24 * faktorial(2-1)=1. maka 24*1=24. Selesai
    }
}
