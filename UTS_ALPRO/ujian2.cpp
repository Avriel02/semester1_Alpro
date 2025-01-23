#include <iostream>
#include <string>

int main() {
    std::string namaBenar = "Habib";
    int passwordBenar = 2311103159;

    std::string namaPengguna;
    int passwordPengguna;
    int percobaan = 0;
    const int batasPercobaan = 3;

    while (percobaan < batasPercobaan) {
        
        std::cout << "Masukkan Nama Pengguna: ";
        std::cin >> namaPengguna;

        std::cout << "Masukkan Password: ";
        std::cin >> passwordPengguna;

        if (namaPengguna == namaBenar && passwordPengguna == passwordBenar) {
            std::cout << "Login berhasil, Master!! \n";
            break;
        } else {
            std::cout << "Login gagal. Silakan coba lagi.\n";
            percobaan++;
        }
    }

    if (percobaan == batasPercobaan) {
        std::cout << " maaf coba lagi ya . \n";
    }

    return 0;
}
