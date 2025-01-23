#include <iostream>
using namespace std;
struct barang
{
    float jumlah_minyak_goreng;
    float jumlah_telur;
    float jumlah_gula;
    int jumlah_mie_instant;
};
const int harga_minyak_goreng = 15000;
const int harga_telur = 20500;
const int harga_gula = 12700;
const int harga_mie_instant = 2500;
barang terbeli;
int main()
{
    cout << "Jumlah minyak goreng yang dibeli : ";
    cin >> terbeli.jumlah_minyak_goreng;
    cout << "Jumlah telur yang terbeli : ";
    cin >> terbeli.jumlah_telur;
    cout << "Jumlah gula yang terbeli : ";
    cin >> terbeli.jumlah_gula;
    cout << "Jumlah mie instant yang terbeli : ";
    cin >> terbeli.jumlah_mie_instant;
    int total_harga = (harga_minyak_goreng * terbeli.jumlah_minyak_goreng) +
                      (harga_telur * terbeli.jumlah_telur) + (harga_gula * terbeli.jumlah_gula) +
                      (harga_mie_instant * terbeli.jumlah_mie_instant);
    cout << "Total belanjaan anda adalah : " << total_harga << endl;
    return 0;
}