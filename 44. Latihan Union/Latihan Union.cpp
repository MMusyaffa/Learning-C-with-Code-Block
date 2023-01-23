#include <iostream>

using namespace std;

union nama{
    int Int_value;
    char Char_value[4];
};

int main()
{
    nama mikel;

    mikel.Int_value = 2331;

    cout <<" Data Int_value: " << mikel.Int_value << endl;
    cout <<" Dara Char_value: " << mikel.Char_value << endl;

    mikel.Char_value[0] = 'a';
    mikel.Char_value[2] = 'l';
    mikel.Char_value[1] = 'm';
    mikel.Char_value[3] = 'z';

    cout <<" Data Int_value: " << mikel.Int_value << endl;
    cout <<" Dara Char_value: " << mikel.Char_value << endl;

    cin.get();
    return 0;
}
