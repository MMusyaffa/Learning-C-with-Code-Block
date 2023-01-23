#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 9;

    bool hasil;

    //NOT (!...)
    hasil = !(a == 5); //Karena not maka walaupun a=5 benar hasilnya 0
    cout << hasil << endl;

    //AND ( and )
    cout << "Untuk and \n";
    hasil = (a == 5) and (b == 9); //True and True hasilnya TRUE (1)
    cout << hasil << endl;
    hasil = (a == 5) and (b == 12); //True and False hasilnya FALSE (0)
    cout << hasil << endl;
    hasil = (a == 78) and (b == 9); //False and True hasilnya FALSE (0)
    cout << hasil << endl;
    hasil = (a == 90) and (b == 52); // False and False hasilnya FALSE (0)
    cout << hasil << endl;

    //Or (or)
    cout << "Untuk or \n";
    hasil = (a == 5) or (b == 9); //True or True hasilnya TRUE (1)
    cout << hasil << endl;
    hasil = (a == 89) or (b == 9); //False or True hasilnya TRUE (1)
    cout << hasil << endl;
    hasil = (a == 5) or (b == 12); //True or False hasilnya TRUE (1)
    cout << hasil << endl;
    hasil = (a == 123) or (b == 211); //False or False hasilnya FALSE (0)
    cout << hasil << endl;

    return 0;
}
