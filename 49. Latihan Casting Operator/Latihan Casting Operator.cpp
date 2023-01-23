#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    float b = 9.221;
    char c = 'z';

    cout <<" Belum casting " << a+b << endl; //Akan keluar apa adanya (belum dicasting)
    cout <<" Sudah casting " << a+(int)b << endl; //Akan keluar dengan bentuk integer karna b sudah dicasting

    cout <<" Belum casting " << a+c << endl; //Akan keluar dengan integer karna char juga memiliki nilai
    cout <<" Nilai dari char 'z' " << (int)c << endl;
    cout <<" Sudah casting " << (char)(a+c) << endl;

    cin.get();
    return 0;
}
