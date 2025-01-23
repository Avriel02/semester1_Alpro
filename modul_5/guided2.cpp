#include <iostream>
using namespace std;
int main()
{
    int bilangan;
    // Meminta pengguna memasukkan bilangan bulat
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;
    // Menentukan apakah bilangan adalah positif, negatif, atau nol
    if (bilangan > 0)
    {
        cout << "Bilangan positif." << endl;
    }
    else if (bilangan < 0)
    {
        cout << "Bilangan negatif." << endl;
    }
    else
    {
        cout << "Nol." << endl;
    }
    return 0;
}