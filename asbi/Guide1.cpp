#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout << "Masukkan 5 Angka: \n";
    // Meminta pengguna memasukkan angka ke dalam array
    for (int i = 0; i < size; ++i)
    {
        cout << "Angka " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Angkanya adalah: ";

    // Menampilkan hasil deklarasi array
    for (int i = - 1; i >= 0; --i)
    {
        cout << numbers[i] << " ";
    }
    return 0;

}