#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa
{
    string nama;
    double ips;
};
void tukarData(Mahasiswa &a, Mahasiswa &b)
{
    Mahasiswa temp = a;
    a = b;
    b = temp;
}
void urutkanBerdasarkanNama(Mahasiswa arr[], int n, bool ascending)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ascending)
            {
                if (arr[j].nama > arr[j + 1].nama)
                {
                    tukarData(arr[j], arr[j + 1]);
                }
            }
            else
            {
                if (arr[j].nama < arr[j + 1].nama)
                {
                    tukarData(arr[j], arr[j + 1]);
                }
            }
        }
    }
}
void urutkanBerdasarkanIPS(Mahasiswa arr[], int n, bool ascending)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ascending)
            {
                if (arr[j].ips > arr[j + 1].ips)
                {
                    tukarData(arr[j], arr[j + 1]);
                }
            }
            else
            {
                if (arr[j].ips < arr[j + 1].ips)
                {
                    tukarData(arr[j], arr[j + 1]);
                }
            }
        }
    }
}
void tampilkanMahasiswa(Mahasiswa arr[], int n)
{
    cout << "No\tNama\t\t\tIPS" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << arr[i].nama << "\t\t" << arr[i].ips << endl;
    }
}
int main()
{
    const int jumlahMahasiswa = 10;
    Mahasiswa daftarMahasiswa[jumlahMahasiswa] = {
        {"Bayu Anggito", 3.55},
        {"Andara Cantika", 3.70},
        {"Deni Kalamati", 3.21},
        {"Hilman Jumawa", 2.99},
        {"Kirman Sukirman", 3.00},
        {"Nakula Firman", 2.59},
        {"Virgi Rosela", 3.05},
        {"Windy Kumala", 2.88},
        {"Ammy Liami", 3.33},
        {"Hilmi Sumitra", 3.91}};
    cout << "Data Mahasiswa Sebelum Diurutkan:" << endl
         << endl;
    tampilkanMahasiswa(daftarMahasiswa, jumlahMahasiswa);
    urutkanBerdasarkanNama(daftarMahasiswa, jumlahMahasiswa, true);
    cout << endl;
    cout << "Data Mahasiswa Setelah Diurutkan berdasarkan Nama secara Ascending:" << endl
         << endl;
    tampilkanMahasiswa(daftarMahasiswa, jumlahMahasiswa);
    urutkanBerdasarkanIPS(daftarMahasiswa, jumlahMahasiswa, false);
    cout << endl;
    cout << "Data Mahasiswa Setelah Diurutkan berdasarkan IPS secara Descending:" << endl
         << endl;
    tampilkanMahasiswa(daftarMahasiswa, jumlahMahasiswa);
    return 0;
}