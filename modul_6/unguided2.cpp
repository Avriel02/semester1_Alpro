#include <iostream>
using namespace std;
int main()
{
    int tinggi, hasil;
    cout << "masukkan tinggi segitiga: ";
    cin >> tinggi;
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            hasil = hasil + 2;
            cout << hasil << " ";
        }
        cout << endl;
    }
}
