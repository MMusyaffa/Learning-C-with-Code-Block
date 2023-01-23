#include <iostream>

using namespace std;

enum kain{sutra, emas, wool, katun};

int main()
{
    kain baju;

    baju = sutra;

    if (baju == sutra){
        cout <<" Kain ini khusus untuk Wanita" << endl;
    }else if (baju == wool){
        cout <<" Kain ini enak untuk cuaca dingin" << endl;
    }

    cout << baju << endl;

    cin.get();
    return 0;

}
