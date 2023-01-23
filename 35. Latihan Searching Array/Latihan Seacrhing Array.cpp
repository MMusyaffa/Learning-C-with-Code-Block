#include <iostream>
#include <array>
#include <algorithm>

const size_t Sizearray = 10;

void tampilArray (std::array <int, Sizearray> &angka){
    std::cout <<" Array: ";
    for (int &a : angka){
        std::cout << a <<" ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array <int, Sizearray> angka = {11,24,2,6,4,6,10,9,3,0};
    tampilArray(angka);

    int CariAngka;
    bool ketemu;

    //Ada dua cara yaitu di sort dulu lalu pakai Binary_seacrh
    std::cout <<" Maksukan angka yang ingin dicari dari array di atas: " << std::endl;
    std::cin >> CariAngka;
    std::sort(angka.begin(), angka.end());

    ketemu = std::binary_search(angka.begin(), angka.end(), CariAngka);
    if (ketemu){
        std::cout <<" Ketemu "<< std::endl;
    }else{
        std::cout <<" Angka tidak ditemukan " << std::endl;
    }

    std::cin.get();
    return 0;
}
