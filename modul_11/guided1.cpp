#include <iostream>
using namespace std;
int main()
{
    const int panjangArray = 6;
    int data[panjangArray] = {13, 16, 14, 21, 76, 15};
    int cari, penghitung = 0;
    bool ketemu = 0;
    cout << "Masukkan data yang ingin dicari = ";
    cin >> cari;
    for (int i = 0; i < panjangArray; i++)
    {
        penghitung++;
        if (data[i] == cari)
        {
            ketemu = 1;
            break;
        }
    }
    if (ketemu == 1)
    {
        cout << "Data ada!" << endl;
        cout << "Proses perbandingan terjadi sebanyak : " << penghitung << endl;
    }
    else
    {
        cout << "Data tidak ada!" << endl;
    }
    return 0;
}