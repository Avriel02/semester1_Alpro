#include <iostream>
using namespace std;

#ifndef SHAPES_H
#define SHAPES_H

// Fungsi untuk menghitung luas dari persegi panjang
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    double luas = panjang * lebar;
    return luas;
}

// Fungsi untuk menghitung keliling dari persegi panjang
double hitungKelilingPersegiPanjang(double panjang, double lebar) {
    double keliling = 2 * (panjang + lebar);
    return keliling;
}

// Fungsi untuk menghitung luas dari persegi
double hitungLuasPersegi(double sisi) {
    double luas = sisi * sisi;
    return luas;
}

// Fungsi untuk menghitung keliling dari persegi
double hitungKelilingPersegi(double sisi) {
    double keliling = 4 * sisi;
    return keliling;
}

// Fungsi untuk menghitung luas dari segitiga
double hitungLuasSegitiga(double alas, double tinggi) {
    double luas = 0.5 * alas * tinggi;
    return luas;
}

// Fungsi untuk menghitung keliling dari segitiga
double hitungKelilingSegitiga(double sisi1, double sisi2, double sisi3) {
    double keliling = sisi1 + sisi2 + sisi3;
    return keliling;
}

// Fungsi untuk menghitung luas dari lingkaran
double hitungLuasLingkaran(double jariJari) {
    double luas = 3.14 * jariJari * jariJari;
    return luas;
}

// Fungsi untuk menghitung keliling dari lingkaran
double hitungKelilingLingkaran(double jariJari) {
    double keliling = 2 * 3.14 * jariJari;
    return keliling;
}

//Fungsi untuk menghitung keliling dari belah ketupat
double hitungKelilingBelahKetupat(double sisi1, double sisi2, double sisi3, double sisi4) {
    double keliling = sisi1 + sisi2 + sisi3 + sisi4;
    return keliling;
}
// Fungsi untuk menghitung luas dari belah ketupat
double hitungLuasBelahKetupat(double diagonal1, double diagonal2) {
    double luas = 0.5 * diagonal1 * diagonal2;
    return luas;

}
 
#endif