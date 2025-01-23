#include <iostream>
#include "shapes.h"
using namespace std;

// Definisi fungsi-fungsi untuk menghitung luas dan keliling bangun datar
// ...

int main() {
    int pilihan;
    double p, l, s, r;
    double s1, s2, s3;
    int lanjutkan = 1;

    do {
        cout << "Menghitung luas dan keliling bangun datar 2D" << endl;
        cout << "1. Persegi Panjang" << endl;
        cout << "2. Persegi" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Belah Ketupat" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                cout << "Masukkan panjang: ";
                cin >> p;
                cout << "Masukkan lebar: ";
                cin >> l;
                cout << endl;

                cout << "Luas: " << hitungLuasPersegiPanjang(p, l) << endl;
                cout << "Keliling: " << hitungKelilingPersegiPanjang(p, l) << endl;
                break;

            case 2:
                cout << "Masukkan panjang sisi: ";
                cin >> s;
                cout << endl;

                cout << "Luas: " << hitungLuasPersegi(s) << endl;
                cout << "Keliling: " << hitungKelilingPersegi(s) << endl;
                break;

            case 3:
                cout << "Masukkan sisi 1: ";
                cin >> s1;
                cout << "Masukkan sisi 2: ";
                cin >> s2;
                cout << "Masukkan sisi 3: ";
                cin >> s3;
                cout << endl;

                cout << "Luas: " << hitungLuasSegitiga(s1, s2) << endl;
                cout << "Keliling: " << hitungKelilingSegitiga(s1, s2, s3) << endl;
                break;

            case 4:
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> r;
                cout << endl;

                cout << "Luas: " << hitungLuasLingkaran(r) << endl;
                cout << "Keliling: " << hitungKelilingLingkaran(r) << endl;
                break;

            case 5:
                cout << "Masukkan diagonal 1: ";
                cin >> s1;
                cout << "Masukkan diagonal 2: ";
                cin >> s2;
                cout << endl;

                cout << "Luas: " << hitungLuasBelahKetupat(s1, s2) << endl;
                cout << "Keliling: " << hitungKelilingBelahKetupat(s1, s2, s1, s2) << endl;
                break;
                
            default:
                cout << "Pilihan tidak valid" << endl;
                break;

        }

        cout << "Lanjutkan? (1/0): ";
        cin >> lanjutkan;

    } while (lanjutkan);

    return 0;
}