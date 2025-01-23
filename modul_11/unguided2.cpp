#include <iostream>
#include <string>
using namespace std;

int main()
{
    int panjangArray;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> panjangArray;

    string *data = new string[panjangArray];

    // Meminta pengguna untuk memasukkan elemen-elemen array (kata)
    cout << "Masukkan kata-kata dalam array:" << endl;
    for (int i = 0; i < panjangArray; ++i)
    {
        cout << "Kata " << i + 1 << ": ";
        cin >> data[i];
    }

    string kataCari;
    bool ketemu = false;

    // Meminta pengguna untuk memasukkan kata yang ingin dicari dalam array
    cout << "Masukkan kata yang ingin dicari: ";
    cin >> kataCari;

    // Implementasi algoritma sequential search untuk pencarian kata
    for (int i = 0; i < panjangArray; ++i)
    {
        if (data[i] == kataCari)
        {
            ketemu = true;
            break;
        }
    }

    // Menampilkan hasil pencarian kata
    if (ketemu)
    {
        cout << "Kata ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Kata tidak ditemukan dalam array." << endl;
    }

    // Menghapus alokasi memori
    delete[] data;

    return 0;
}
