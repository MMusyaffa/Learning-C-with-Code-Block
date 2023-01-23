#include <iostream>

using namespace std;

int main()
{
    //Break dan Continue FOR
    cout <<" For Break \n";
    for (int l=1; l<6; l++){ //Akan diloop sampai l<6
        if (l==4){
            break; //Akan memberhentikan apabila if terpenuhi
        }

    cout <<" Sudah " << l << endl;
    }

    cout <<"\n For Continue \n";
    for (int k=0; k<=6; k++){
        if (k==3){
            continue;
        }
    cout <<" oke " << k << endl;
    }

    //Break dan Continue While
    cout <<"\n While Break " << endl;
    int h = 1;
    while (h<10){
        h++;
        if (h==7){
            break;
        }
        cout <<" Bisa " << h << endl;
    }

    cout <<" \n While Continue " << endl;
    int q = 2;
    while (q<12){
        q++;
        if (q==9){
            continue;
        }
        cout <<" Haloo " << q << endl;
    }


    cout <<"\n Sudah Selesai" << endl;

    cin.get();
    return 0;
}
