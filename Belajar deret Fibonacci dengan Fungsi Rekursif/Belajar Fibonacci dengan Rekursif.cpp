#include <iostream>

using namespace std;

int fibonacci (int n); //Prototype fungsi fibonacci

int main()
{
    int angka, hasil;

    cout <<" Urutan Fibonacci ke: ";
    cin >> angka;

    hasil = fibonacci(angka);
    cout <<" Hasilnya: " << hasil << endl;

    return 0;
}

int fibonacci (int n){
    if ((n==0) or (n==1)){ //JIka n nya sudah 1 atau 0 maka akan selesai
        return n;
    }else{ //Misal n=4 maka (4-1)=3 dan (4-2)=2, maka urutan fibonacci(3)+urutan fibonacci(2)= 2+1=3
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
