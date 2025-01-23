#include <iostream>

using namespace std;

int main() {
    char operasi;
    double angka1, angka2;

    cout << "Pilih jenis operasi bilangan: ";
    cin >> operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2 << endl;
            break;
        case '/':
            if (angka2 != 0) {
                cout << angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
            } else {
                cout << "Error: Pembagian oleh nol tidak diperbolehkan." << endl;
            }
            break;
        default:
            cout << "Error: Operator tidak valid." << endl;
            break;
    }

    return 0;
}
