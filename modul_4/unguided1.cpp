#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    cout << "Enter 5 numbers: " << endl;

    // Simpan input dari pengguna ke dalam array
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
    }

    cout << "The numbers are ";

    // Mencetak elemen array dalam urutan terbalik
    for (int n = 4; n >= 0; --n)
    {
        cout << numbers[n] << " ";
    }

    return 0;
}
