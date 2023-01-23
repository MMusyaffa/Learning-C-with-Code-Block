#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char lanjut; //Lanjut tipe datanya character

    while(true){ //Membuat loopingan dadu acak
        cout <<" Akan acak dadu? (y/n)";
        cin >> lanjut;

        if (lanjut == 'y'){ //Jika memilih char 'y' maka akan jalan dibawahnya
            cout << 1+ (rand() %6) << endl; // rand adalah fungsi random lalu di modulo 6 dan ditambah 1 agar hasilnya 1-6
        }else if (lanjut == 'n'){ //Jika memilih 'n' akan berhenti
            break;
        }else{
            cout <<" Masuakan y atau n" << endl;
        }
    }

    return 0;
}
