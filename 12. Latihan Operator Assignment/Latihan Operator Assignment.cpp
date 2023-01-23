#include <iostream>

using namespace std;

int main()
{
    int a = 8; //Assignment biasa
    cout <<" Nilai awal a: "<< a << endl;

    //Assignment Operator
    //Variabel = variabel operator eksepresi
    //    a    =     a        +       6
    //Variabel operator ekspresi (Cara lebih cepat)
    //    a      +=        6

    a += 6; // a = a+6
    cout <<" a ditambah 6: "<< a << endl;

    a -= 5; // a = a-5
    cout <<" a dikurang 5: "<< a << endl;

    a /= 4; // a = a/4
    cout <<" a dibagi 4: "<< a << endl;

    a *= 2; // a = a*2
    cout <<" a dikali 2: "<< a << endl;

    a %= 3; // a = a%3
    cout <<" a dimodulus 3: "<< a << endl;


    return 0;
}
