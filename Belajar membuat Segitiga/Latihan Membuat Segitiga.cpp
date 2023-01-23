#include <iostream>

using namespace std;

int main()
{
    int n;

    cout <<" Masukan panjang : ";
    cin >> n; //Memasukan panjang segitiga


    cout <<" Pola 1 \n"; //Segitiga |_\

    for (int i=1; i<=n; i++){ //untuk mengulang ke bawah
        for (int k=1; k<=i; k++){ //Untuk mengulang kesamping
            cout <<" x";
        }
        cout << endl;
    }

    cout <<"\n Pola 2 \n"; //Segitiga |-/

    for (int i=1; i<=n; i++){
        for (int h=n; h>=i; h--){
            cout <<" *";
        }
        cout << endl;
    }


    cout <<"\n Pola 3 \n"; //Segitiga \-|

    for (int i=1; i<=n; i++){
        for (int j=1; j<i; j++){
            cout <<" ";
        }
        for (int k=n; k>=i; k--){
            cout <<"*";
        }
        cout << endl;
    }


    cout <<"\n Pola 4 \n"; //Segitiga /-|

    for (int i=1; i<=n; i++){
        for (int j=n; j>i; j--){
            cout <<" ";
        }
        for (int k=1; k<=i; k++){
            cout <<"X";
        }
        cout << endl;
    }

    cout <<"\n Pola 5 \n"; //Segitiga /_\

    for (int i=1; i<=n; i++){
        for (int j=n; j>i; j--){
            cout <<" ";
        }
        for (int k=1; k<=(i*2 - 1); k++){
            cout <<"*";
        }
        cout << endl;
    }

    cout <<"\n Pola 6 \n"; //Segitiga \-/

    for (int i=1; i<=n; i++){
        for (int j=1; j<i; j++){
            cout <<" ";
        }
        for (int k=n; k>=(2*i - n); k--){
            cout <<"*";
        }
        cout << endl;
    }

    cout <<"\n Pola 7 \n";

    for (int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout <<" ";
        }
        for (int k=1; k<=(i*2-1); k++){
            cout <<"*";
        }
        cout << endl;
    }

    for (int i=2; i<=n; i++){
        for (int j=1; j<i; j++){
            cout <<" ";
        }
        for (int k=n; k>=(2*i-n); k--){
            cout <<"*";
        }
        cout << endl;

    }

    return 0;
}
