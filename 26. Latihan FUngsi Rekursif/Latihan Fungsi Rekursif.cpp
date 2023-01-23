#include <iostream>

using namespace std;

int pangkat (int a, int b){ //Inputan a dan b nya
    int hasil = a; //hasil akan senilai dengan a
    for (int i=1; i<b; i++){ //pengulangan i dimulai dari 1 dan i akan berhenti sampai kurang dari b-nya, b=3, i=1 maka putaran 1, i=1+1, i=2 2<3(benar), putaran 2, i=2+1=3, 3<3 (salah)maka berhenti
        hasil = hasil * a; //hasil akan diupdate dari hasil yang seniali dgn a lalu dikalikan a
    } //hasil = 2, hasil = 2*2=4, hasil=4, hasil = hasil(4)*2=8, hasil=8
    return hasil;
}

int pangkat_rekursif (int a, int b){
    if (b<=1){ //Jika b sudah bernilai 1 maka akan keluar ini
        cout <<" akhir rekursif" << endl; //b=1 maka akan jalan ini dan berhenti
        return a; //Return a = 2
    }else{
        cout <<" rekursif \n"; //jika b=3,b=2 maka akan jalan ini
        return a * pangkat_rekursif(a,(b-1)); // return a=2, 2*2=4, return a = 4, 4*2=8, return a = 8
    }//pangkat_rekursif(2,(3-1))=(2,2)->(2,(2-1))=(2,1) nah maka akan jalan if(b<=1)
}

int main()
{
    int a,b;

    cout <<" Angka : ";
    cin >> a;
    cout <<" Pangkat : ";
    cin >> b;

    cout <<" Hasil pangkat iterasi = " << pangkat(a,b) << endl;
    cout <<" Hasil pangkat rekursif = \n" << pangkat_rekursif(a,b) << endl;

    return 0;
}
