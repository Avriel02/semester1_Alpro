#include <iostream>
#include <string>

int main()
{
    // Deklarasi variabel
    std::string nama_karyawan;
    char golongan;
    int jam_kerja;
    const int jam_normal = 48;
    const int lembur = 3000;
    int perjam;

    // Input data dari pengguna
    std::cout
        << "Masukkan nama karyawan: ";
    std::getline(std::cin, nama_karyawan);
    std::cout << "Masukkan golongan (A/B/C/D): ";
    std::cin >> golongan;
    std::cout << "Masukkan jumlah jam kerja selama seminggu: ";
    std::cin >> jam_kerja;

    // Menentukan upah perjam berdasarkan golongan
    switch (golongan)
    {
    case 'A':
        perjam = 4000;
        break;
    case 'B':
        perjam = 5000;
        break;
    case 'C':
        perjam = 6000;
        break;
    case 'D':
        perjam = 7500;
        break;
    default:
        std::cerr << "Golongan tidak valid." << std::endl;
        return 1; // Keluar program dengan kode kesalahan
    }

    // Menghitung gaji mingguan
    int gaji_mingguan;
    if (jam_kerja <= jam_normal)
    {
        gaji_mingguan = jam_kerja * perjam;
    }
    else
    {
        int jam_lembur = jam_kerja - jam_normal;
        gaji_mingguan = jam_normal * perjam + jam_lembur * lembur;
    }

    // Menampilkan hasil
    std::cout << "\nGaji mingguan untuk karyawan " << nama_karyawan << " (Golongan " << golongan << "): ";
    std::cout << "Rp " << gaji_mingguan << std::endl;

    return 0;
}