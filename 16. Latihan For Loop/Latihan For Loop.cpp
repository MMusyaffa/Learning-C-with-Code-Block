#include <iostream>

using namespace std;

int main()
{
    cout <<"\n For loop 1" << endl;
    for(int j=1; j<6; j++){
    //untuk j=1| jika j<| j akan di increment atau ditambahkan terus
        cout <<" nomor " << j << endl;
    }

    cout <<"\n For loop 2" << endl;
    for(int l=0; l>=-4; l--){
        cout <<" bisa " << l << endl;
    }

    cout <<"\n For loop 3" << endl;
    for(int i=1; i<9; i += 2){
        cout <<" Ayo " << i << endl;
    }


    cout <<"\n For loop 4" << endl;
    int total = 0;
    for(int k=1; k<=8; k++, total += k){
        cout << k << " || " << total << endl;
    }

    cin.get();
    return 0;
}
