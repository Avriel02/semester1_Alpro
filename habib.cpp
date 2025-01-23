#include <iostream>
using namespace std;
int main()
{
    string warna;
    cout << "Silahkan masukkan warna (KAPITAL) : ";
    cin >> warna;
    if (warna == "MERAH")
    {
        cout << "Berhenti" << endl;
    }
    else if (warna == "HIJAU")
    {
        cout << "Jalan" << endl;
    }
    else if (warna == "KUNING")
    {
        cout << "Siap-Siap" << endl;
    }
    else
    {
        cout << "Bukan Warna Lampu Lalu Lintas" << endl;

        return 0;
    }
}