// NIM: 2311103159
// Name: Habib Rafi'i
// Class: s1-SI07D

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    string nim;
    string kelas;
    string usia;
    string jenisKelamin;

    cout << "==========================" << endl;
    cout << "  Masukan Data Berikut " << endl;
    cout << "==========================" << endl;

    cout << "Masukkan Nama Anda                 : ";
    getline(cin, nama);

    cout << "Masukkan NIM Anda                  : ";
    getline(cin, nim);

    cout << "Masukkan Kelas Anda                : ";
    getline(cin, kelas);

    cout << "Masukkan Usia Anda                 : ";
    getline(cin, usia);

    cout << "Masukkan Jenis Kelamin Anda (L/P)  : ";
    getline(cin, jenisKelamin);

    cout << endl;
    cout << "==========================" << endl;
    cout << "       DATA ANDA" << endl;
    cout << "==========================" << endl;

    cout << "Nama             : " << nama << endl;
    cout << "NIM              : " << nim << endl;
    cout << "Kelas            : " << kelas << endl;
    cout << "Usia             : " << usia << endl;
    cout << "Jenis Kelamin    : " << jenisKelamin << endl;
}

