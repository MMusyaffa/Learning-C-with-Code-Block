#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,10>nilai; //nama array, ukuran, dan tipe datanya

    cout <<" Program penampil nilai Mahasiswa Pasca UAS \n" << endl;
    for (int i=0; i<=nilai.size(); i++){ //mulai dari nol dan akan sampai ke ukuran arraynya karena ukuran array 10 maka sampai akhir 10
        cout <<" Jumlah mahasiswa dengan nilai: ";
        if(i==0){ //mulai dari nol maka akan jalan ini
            cout <<" 0-9 : ";
        }else if(i==10){ //jika sampai 10 maka akan jalan ini
            cout <<" 100 : ";
        }else{ //akan jalan karena 1-9 masuk ke sini tidak ada kondisi khusus
            cout << i*10 <<"-"<< (i*10)+9 << ": "; //i akan mulai dari 1 dan nanti 1*10= 10 dan 10+9=19 maka hasilnya 10-19 dan begitu seterusnya mengikuti i
        }
        cin >> nilai[i];
    }

    cout << endl;

    cout <<" Penampil Grafik " << endl;
    for(int i=0; i<=nilai.size(); i++){
        if (i==0){
            cout <<"  0-9 : ";
        }else if(i==10){
            cout <<"  100 : ";
        }else{
            cout <<" "<< i*10 <<"-"<< (i*10)+9 <<": ";
        }
        for (int bin=0; bin<nilai[i]; bin++){ //akan jalan sesuai inputan dari nilai[i] yang telah kita masukan
            cout <<"*";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}


