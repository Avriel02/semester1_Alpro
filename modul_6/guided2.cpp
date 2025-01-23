#include <iostream>
using namespace std;
int main()
{
    int sisi;
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    for (int i = 1; i <= sisi; i++)
    {
        for (int j = 1; j <= sisi; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}