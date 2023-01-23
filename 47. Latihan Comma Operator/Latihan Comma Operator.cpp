#include <iostream>

using namespace std;

void tampil(int val){
    cout << val << endl; //Fungsi void untuk menampilkan
}

int main()
{
    int a;
    int b;
    int c;

    a = ( b=2, tampil(b), c=9, tampil(c), (b*c));
    cout << a << endl;

    cin.get();
    return 0;
}
