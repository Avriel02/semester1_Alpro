#include <iostream>
using namespace std;
int main(){
int bilangan;
int pangkat;
int hasil = 1;
int c = 0;

    cout << "Silahkan masukkan bilangan :";
    cin >> bilangan;
    cout << "Silahkan masukkan pangkat  :";
    cin >> pangkat;

    while(c < pangkat){
        hasil *= bilangan;
        c++;
    }
    cout << endl;
    cout << "\t"<<bilangan<<" pangkat "<<pangkat<<" = "<<hasil<<endl;
}