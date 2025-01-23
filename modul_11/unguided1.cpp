#include <iostream>
using namespace std;

int main()
{
    int panjangArray;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> panjangArray;

    int *data = new int[panjangArray];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < panjangArray; ++i)
    {
        cout << "Elemen " << i + 1 << ": ";
        cin >> data[i];
    }

    int nilaiCari;
    bool ketemu = false;

    // Meminta pengguna untuk memasukkan nilai yang ingin dicari dalam array
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> nilaiCari;

    // Implementasi algoritma sequential search
    for (int i = 0; i < panjangArray; ++i)
    {
        if (data[i] == nilaiCari)
        {
            ketemu = true;
            break;
        }
    }

    // Menampilkan hasil pencarian
    if (ketemu)
    {
        cout << "Nilai ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Nilai tidak ditemukan dalam array." << endl;
    }

    // Menghapus alokasi memori
    delete[] data;

    return 0;
}
