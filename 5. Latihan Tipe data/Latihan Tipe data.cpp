/*Tipe data ada macam macam
Bilangan bulat
-Int (integer)
-Long
-Short

Bilangan Desimal
-Float
-Double

karakter
-Char

Boolean
-Bool (True atau False)
*/

#include <iostream>

using namespace std;
//Tipe data Integer

int main()
{
    long a =5;
    cout << a << endl; //b bernilai 5
    cout << sizeof(a) <<" byte"<< endl; //besaran a ada 4 byte berarti 32 bit
    //nilai maxnya 2147483647
    //nilai minnya -2147483648

    //cout << numeric_limits<int>::max() << endl; untuk mengetahui batas max integer, long, dan short
    //cout << numeric_limits<int>::min() << endl; untuk mengetahui batas min integer, long, dan short



    long b =9;
    cout << b << endl; //b bernilai 5
    cout << sizeof(b) <<" byte"<< endl; //b mempunyai besaran 8 byte berarti ada 64 bit
    //nilai maxnya 9223372036854775807
    //nilai minnya -9223372036854775808

    short c =20;
    cout << c << endl; //c bernilai 20
    cout << sizeof(c) <<" byte"<< endl; //c memiliki besaran 2 byte berarti ada 16 bit
    //nilai maxnya 32767
    //nilai minnya -32758



    cin.get();
    return 0;
}

