#include <iostream>
using namespace std;
int main()
{
    int arr[100]; // Membuat array dengan kapasitas 100
    // Mengisi array dengan bilangan kelipatan 3
    for (int i = 0; i < 100; i++)
    {
        arr[i] = (i + 1) * 3; // Mengisi dengan bilangan kelipatan 3
    }
    // Menampilkan isi array
    cout << "Isi array bilangan kelipatan 3:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}