#include <iostream>
using namespace std;
int main()
{
    char karakter;
    // Meminta pengguna memasukkan karakter
    cout << "Masukkan sebuah karakter: ";
    cin >> karakter;
    // Memastikan karakter yang dimasukkan adalah huruf (a-z atau A-Z)
    if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
    {
        // Memeriksa apakah karakter adalah huruf vokal
        if (karakter == 'A' || karakter == 'a' || karakter == 'E' || karakter == 'e' ||
            karakter == 'I' || karakter == 'i' || karakter == 'O' || karakter == 'o' ||
            karakter == 'U' || karakter == 'u')
        {
            cout << "Karakter '" << karakter << "' adalah huruf vokal." << endl;
        }
        else
        {
            cout << "Karakter '" << karakter << "' adalah huruf konsonan." << endl;
        }
    }
    else
    {
        cout << "Karakter yang dimasukkan bukan huruf." << endl;
    }
    return 0;
}