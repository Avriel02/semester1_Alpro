#include <iostream>
using namespace std;

int main()
{
    int pilihan = 0;
    do
    {
        cout << " Aplikasi Akademik Telkom " << endl
             << endl;
        cout << " Apa yang Anda butuhkan ? " << endl;
        cout << " 1. Membuat surat keterangan kuliah " << endl;
        cout << " 2. Legalisir Ijazah dan Trankrip Nilai " << endl;
        cout << " 3. Pendaftaran Yudisium " << endl;
        cout << " 0. Keluar " << endl;
        cout << " Silahkan masukkan pilihan Anda (angka) : ";
        cin >> pilihan;
        cout << endl;
    } while (pilihan != 0);
    cout << "Terima kasih banyak " << endl;
    cout << "Silahkan datang kembali " << endl;
}
