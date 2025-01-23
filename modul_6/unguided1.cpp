#include <iostream>
using namespace std;

int main() {
    int angka, pangkat, hasil;

    // Inisialisasi hasil dengan 1, karena setiap bilangan pangkat 0 adalah 1
    hasil = 1;

    cout << "Masukkan bilangan (angka): ";
    cin >> angka;

    cout << "Masukkan pangkat (pangkat): ";
    cin >> pangkat;

    // Melakukan perhitungan pangkat menggunakan sebuah loop
    for (int i = 0; i < pangkat; i++) {
        hasil = hasil * angka;
    }

    // Menampilkan hasil
    cout << angka << " pangkat " << pangkat << " adalah: " << hasil << endl;

    return 0;
}
