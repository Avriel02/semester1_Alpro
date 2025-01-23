#include <iostream>
using namespace std;
int dataHargaJual[] = {300};
int dataHargaBeli = 200;
void ubahHargaJual(int dataHarga[])
{
    dataHarga[0] = 750;
    cout << dataHarga[0] << endl;
}
void ubahHargaBeli(int dataHarga)
{
    dataHarga = 150;
    cout << dataHarga << endl;
}
int main()
{
    cout << dataHargaJual[0] << endl;
    ubahHargaJual(dataHargaJual);
    cout << dataHargaJual[0] << endl;
    cout << "**********************" << endl;
    cout << dataHargaBeli << endl;
    ubahHargaBeli(dataHargaBeli);
    cout << dataHargaBeli << endl;
    return 0;
}