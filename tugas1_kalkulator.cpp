#include <iostream>

using namespace std;

int main() {
    //deklarasi variable
    char operasi;
    double angka1, angka2;

    //input data
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    //switch case
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

    //mengakhiri program
    return 0;
}
