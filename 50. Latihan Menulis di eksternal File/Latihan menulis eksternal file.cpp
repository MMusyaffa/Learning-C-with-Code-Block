#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile;
    /* 3 tipe ofstream
    ios::out = operasi output, hanya menampilkan
    ios::app = append, menambahkan di kata paling terakhir
    ios::trunc = membuat file baru jika belum ada, jika sudah maka file lama akan dihapus dan digantikan yg baru
    */

    int a = 123444;

    myFile.open("data1.txt", ios::out);
    myFile <<" menulis di file data1 ";
    myFile.close();

    myFile.open("data2.txt", ios::app);
    myFile <<" menulis di file data2 ";
    myFile <<" tambahan di belakang untuk data2" << a;
    myFile.close();

    myFile.open("data3.txt", ios::trunc);
    myFile <<" menulis di file data3 \n";
    myFile << a;
    myFile.close();

    cin.get();
    return 0;
}
