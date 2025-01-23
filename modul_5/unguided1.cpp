#include <iostream>

int main() {
    int bulan_if;
    std::cout << "Masukkan bilangan bulan (1-12): ";
    std::cin >> bulan_if;

    if (bulan_if == 1) {
        std::cout << "Januari" << std::endl;
    } else if (bulan_if == 2) {
        std::cout << "Februari" << std::endl;
    } else if (bulan_if == 3) {
        std::cout << "Maret" << std::endl;
    } else if (bulan_if == 4) {
        std::cout << "April" << std::endl;
    } else if (bulan_if == 5) {
        std::cout << "Mei" << std::endl;
    } else if (bulan_if == 6) {
        std::cout << "Juni" << std::endl;
    } else if (bulan_if == 7) {
        std::cout << "Juli" << std::endl;
    } else if (bulan_if == 8) {
        std::cout << "Agustus" << std::endl;
    } else if (bulan_if == 9) {
        std::cout << "September" << std::endl;
    } else if (bulan_if == 10) {
        std::cout << "Oktober" << std::endl;
    } else if (bulan_if == 11) {
        std::cout << "November" << std::endl;
    } else if (bulan_if == 12) {
        std::cout << "Desember" << std::endl;
    } else {
        std::cout << "Bilangan bulan tidak valid. Masukkan angka antara 1 hingga 12." << std::endl;
    }

    return 0;
}