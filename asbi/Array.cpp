#include <iostream>

int main() {
    const int size = 5; // Jumlah elemen dalam array
    int numbers[size];  // Deklarasi array

    // Meminta pengguna memasukkan angka ke dalam array
    std::cout << "Masukkan 5 angka:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Angka ke-" << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Menampilkan angka-angka dalam urutan terbalik
    std::cout << "\nAngka-angka dalam urutan terbalik:\n";
    for (int i = size - 1; i >= 0; --i) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
