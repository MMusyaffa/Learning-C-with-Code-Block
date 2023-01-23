#include <iostream>

using namespace std;

double volum_kubus (double p, double l = 1, double t = 1); //Prototype default argumennya berbentuk l = 1 dan t =1

int main()
{
    cout <<" Nilai kubusnya: " << volum_kubus(4,3,2) << endl; //Inputan volum kubusnya dari 4,6,7
    cout <<" Nilai kubusnya: " << volum_kubus(4,3) << endl; //Inputannya 4,6 dan t nya menggunakan default t = 1
    cout <<" Nilai kubusnya: " << volum_kubus(4) << endl; //Inputanya hanya 4 dan l dan t nya menggunakan l = 1 dan t = 1

    return 0;
}

double volum_kubus (double p, double l, double t){ //Penjabaran dari prototype diatasnya tidak boleh ada default argument
    return p * l * t;
}
