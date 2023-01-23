#include <iostream>
#include <array>

using namespace std;

const int baris = 3;
const int kolom = 3;

void printArray (array <array <int, baris>, kolom> &nilaiArray){
    for (array <int, baris> vectorBaris : nilaiArray){
        cout <<"[ ";
        for (int nilaikolom : vectorBaris){
            cout << nilaikolom << " ";
        }
        cout <<"]"<< endl;
    }
}

int main(){
    array <array <int, baris>, kolom> nilaiMD = {2,3,1,5,9,7,4,8};

    printArray(nilaiMD);

    cin.get();
    return 0;
}
