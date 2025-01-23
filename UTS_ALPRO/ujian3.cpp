#include <iostream>

int main()
{
    char pilihan;
    double angka1, angka2, hasil;
    int pilih;

    std::cout << "Pilih operasi\n";
    std::cout << "1. penjumlahan\n";
    std::cout << "2. pengurangan\n";
    std::cout << "3. perkalian\n";
    std::cout << "4. pembagian\n";
    std::cout << "5. keluar\n";
    std::cout << "Pilih opsi (1-5): ";
    std::cin >> pilih;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    switch (pilihan)
    {
    case '1':
        std::cout << "Masukkan angka pertama: ";
        std::cin >> angka1;
        std::cout << "Masukkan angka kedua: ";
        std::cin >> angka2;
        hasil = angka1 + angka2;
        std::cout << "Hasil: " << hasil << std::endl;
        break;
    case '2':
        std::cout << "Masukkan angka pertama: ";
        std::cin >> angka1;
        std::cout << "Masukkan angka kedua: ";
        std::cin >> angka2;
        hasil = angka1 - angka2;
        std::cout << "Hasil: " << hasil << std::endl;
        break;
    case '3':
        std::cout << "Masukkan angka pertama: ";
        std::cin >> angka1;
        std::cout << "Masukkan angka kedua: ";
        std::cin >> angka2;
        hasil = angka1 * angka2;
        std::cout << "Hasil: " << hasil << std::endl;
        break;
    case '4':
        std::cout << "Masukkan angka pembilang: ";
        std::cin >> angka1;
        std::cout << "Masukkan angka penyebut: ";
        std::cin >> angka2;
        if (angka2 != 0)
        {
            hasil = angka1 / angka2;
            std::cout << "Hasil: " << hasil << std::endl;
        }
        else
        {
            std::cout << "Error: Pembagian dengan nol tidak diizinkan." << std::endl;
        }
        break;
    case '5':
        std::cout << "Terimakasih telah menggunakan kalkulator:)\n" << std::endl;
            return 0;

        break;
    default:
        std::cout << "Error: Operasi tidak valid.\n";
        break;
    }
    

    return 0;
}