#include <iostream>
#include <cmath> //Standard library untuk matematika biar kita ga bikin program sendiri karna sudah ada

using namespace std;

/*
library cmath:
ceil(x) => pembulatan ke atas
floor(x) => pembulatan ke bawah
cos(x) => cosinus
sin(x) => sinus
tan(x) => tangen
exp(x) => eksponen
fabs(x) => nilai absolut dalam float
fmod(x) => modulus dalam float
log(x) => logaritma dengan basis natural
log10(x) => logaritma dengan basis 10
pow(x,y) => x pangkat y
sqrt(x) => akar kuadrat
*/

int main()
{
    int x;
    int y;

    cout <<" Menghitung akar kuadrat dari: ";
    cin >> x;
    cout <<" Menghitung cosinus dari: ";
    cin >> y;

    float z = sqrt(x);
    double v = cos(y);
    cout <<" hasil akarnya adalah : " << z << endl;
    cout <<" hasil eksponennya : " << v << endl;

    return 0;
}
