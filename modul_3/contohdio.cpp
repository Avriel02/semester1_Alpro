#include <iostream>
using namespace std;
int main()
{
 const float k = 273, f = 32, r = 5/4;
 int pilih;
 float suhu, hasil;
 cout << "\t\t"<< "Konversi Suhu" <<endl;
 cout << "\t"<< "1. Fahrenheit -> Celcius" <<endl;
 cout << "\t"<< "2. Kelvin -> Celcius" <<endl;
 cout << "\t"<< "3. Reamur -> Celcius" <<endl;
 cout << "\t"<< "Masukkan pilihan : ";
 cin >> pilih;

 cout <<endl << "Masukkan suhu dalam satuan yang dipilih : ";
 cin >> suhu;

 if(pilih == 1){
 hasil = 5/9 * (f-32);
 }

 else if(pilih == 2){
 hasil = (float)k-273;
 }

 else if(pilih == 3){
 hasil = (float)r*5/4;
 }
 cout << "Hasil konversinya adalah : " << hasil <<endl;
 return 0;
}