#include <iostream>
using namespace std;

struct Barang
{
    string nama;
    double harga;
};

void insertionSort(Barang arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        Barang key = arr[i];
        int j = i - 1;

        // Pindahkan elemen yang lebih besar dari key ke posisi setelahnya
        while (j >= 0 && arr[j].harga > key.harga)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void tampilkanBarang(Barang arr[], int n)
{
    cout << "Daftar Barang setelah Diurutkan Berdasarkan Harga:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "No\tNama Barang\tHarga" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << "\t" << arr[i].nama << "\t\t" << arr[i].harga << endl;
    }
}

int main()
{
    const int jumlahBarang = 5;
    Barang daftarBarang[jumlahBarang] = {
        {"Kemeja", 150000},
        {"Celana Jeans", 200000},
        {"Jaket", 300000},
        {"Dress", 180000},
        {"Topi", 50000}};

    cout << "Daftar Barang Sebelum Diurutkan:" << endl;
    tampilkanBarang(daftarBarang, jumlahBarang);

    insertionSort(daftarBarang, jumlahBarang);

    cout << "\nDaftar Barang Setelah Diurutkan Berdasarkan Harga:" << endl;
    tampilkanBarang(daftarBarang, jumlahBarang);

    return 0;
}
