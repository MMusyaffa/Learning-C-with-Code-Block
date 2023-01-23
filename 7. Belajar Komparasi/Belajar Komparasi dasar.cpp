#include <iostream>

using namespace std;

//Belajar komparasi dasar
int main()
{
    int a = 7;
    int b = 7;

    bool hasil1, hasil2;

    //Komparasi
    //Sebanding ==
    hasil1 = (a==b); //hasilnya akan 1 karena benar (TRUE) sebanding
    //Tidak sebanding !=
    hasil2 = (a!=b); //hasilnya 0 karna seharusnya sebanding jadi salah (FALSE)

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    //Kurang dari
    hasil1 = (a<b); //hasilnya 0 karna nilainya sama 7=7 maka salah (FALSE)
    //Lebih dari
    hasil2 = (a>b); //hasilnya 0 karna nilainya sama 7=7 maka salah (FALSE)

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    //Kurang dari sama dengan
    hasil1 = (a<=b); //hasilnya akan 1 alias benar karena 7<=7 (TRUE)
    //Lebih dari sama dengan
    hasil2 = (a>=b); //hasilnya akan 1 alias benar karena 7>=7 (TRUE)

    cout << hasil1 << endl;
    cout << hasil2 << endl;

}
