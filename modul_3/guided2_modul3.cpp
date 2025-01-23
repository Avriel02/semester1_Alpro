#include <iostream>
using namespace std;
int main()
{
     const float k = 273, f = 32;
     int pilih;
     float celcius, fahrenheit, kelvin, hasil;
     cout << "\t\t"
          << "Konversi Suhu" << endl;
     cout << "\t"
          << "1. Celcius -> Reamur" << endl;
     cout << "\t"
          << "2. Celcius -> Kelvin" << endl;
     cout << "\t"
          << "3. Fahrenheit -> Celcius" << endl;
     cout << "\t"
          << "Masukkan pilihan : ";
     cin >> pilih;
     cout << endl
          << "masukkan nilai fahrenheit : ";
     cin >> fahrenheit;
     if (pilih == 1)
     {
          hasil = (float)4 / 5 * celcius;
     }
     if (pilih == 2)
     {
          hasil = (float)celcius + k;
     }
     if (pilih == 3)
     {
          hasil = (float)5 / 9 * f - 32;
     }
     cout << "Hasil konversinya adalah : " << hasil << endl;
     return 0;
}
