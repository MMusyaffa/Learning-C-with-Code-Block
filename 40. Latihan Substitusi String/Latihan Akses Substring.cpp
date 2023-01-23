#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kal_1("Aku adalah Superman");
    string kal_2("Wajanda poleper");
    cout << kal_1 << endl;
    cout << kal_2 << endl;

    //Swap string (Untuk menukar String)
    kal_1.swap(kal_2);
    cout <<"\n Swap String"<< endl;
    cout <<" 1. "<< kal_1 << endl;
    cout <<" 2. "<< kal_2 << endl;

    //Replace (Mengganti string)
    kal_1.replace(8,7,"Forever");
    kal_2.replace(kal_2.find("e"),1,"a");
    cout <<"\n Replace string" << endl;
    cout <<" 1. "<< kal_1 << endl;
    cout <<" 2. "<< kal_2 << endl;

    //Insert string
    kal_1.insert(7," Selamanya");
    cout <<"\n Insert string" << endl;
    cout <<" 1. "<< kal_1 << endl;
    cout <<" 2. "<< kal_2 << endl;

    cin.get();
    return 0;

}
