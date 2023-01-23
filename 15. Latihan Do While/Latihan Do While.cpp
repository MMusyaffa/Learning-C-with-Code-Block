#include <iostream>

using namespace std;

int main()
{
    int a = 2;

    do{ //Akan melakukan tindakan minimal sekali
        cout <<" Semangat belajar "; //ini yang akan dilakukan tanpa syarat minimal satu kali
        cout << a << endl;
        a = a + 2;
    }while(a < 9); //Kondisi atau Syarat yang harus terpenuhi untuk terjadinya looping, dan agar tidak infinite looping

    return 0;
}
