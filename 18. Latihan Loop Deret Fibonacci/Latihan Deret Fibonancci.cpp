#include <iostream>

using namespace std;

int main()
{
    //Deret Fibonacci
    //Rumus : F(n) = F(n-1) + F(n-2)
    int n;
    int F_n;
    int F_n1;
    int F_n2;

    cout <<" Program Deret Fibonacci "<< endl;
    cout <<" Masukan nilai : ";
    cin >> n;

    F_n1 = 1; //Awal deret
    F_n2 = 0; //Bilangan kedua awal
    cout << F_n1 <<" ";

    for (int i=1; i<n; i++) //i++ berguna agar tidak looping terus menerus sebagai loop stop
    {
        F_n = F_n1 + F_n2;
        F_n2 = F_n1;
        F_n1 = F_n;
        cout <<" "<< F_n <<" ";
    }
    cout <<" \n";

    return 0;
}
