#include <iostream>
using namespace std;
int main()
{
    double tinggi, beratAwal, beratAkhir;
    cout << "Masukkan tinggi Anda (dalam sentimeter): ";
    cin >> tinggi;
    cout << "Masukkan berat badan awal Anda (dalam kilogram): ";
    cin >> beratAwal;
    // Mengurangkan 100 dari tinggi
    tinggi -= 100;
    // Menghitung berat akhir dengan mengurangkan 10% dari hasil pengurangan100
    beratAkhir = beratAwal - (tinggi * 0.1);
    cout << "Berat badan akhir Anda adalah " << beratAkhir << " kilogram."
         << endl;
    return 0;
}