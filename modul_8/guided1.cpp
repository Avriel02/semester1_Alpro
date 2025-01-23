#include <iostream>
using namespace std;
string nama;
void salam()
{
    cout << "Silahkan masukkan nama Anda : ";
    cin >> nama;
    cout << endl;
    cout << "Selamat datang, " << nama << endl;
}
int main()
{
    salam();
    return 0;
}