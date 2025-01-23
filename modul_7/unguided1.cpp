#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username = "Habib";
    string password = "Habib0315";
    string inputUsername, inputPassword;
    int maksimalPercobaan = 3;
    int percobaan = 0;
    while (percobaan < maksimalPercobaan)
    {
        cout << "Masukkan Username: ";
        cin >> inputUsername;
        cout << "Masukkan Password: ";
        cin >> inputPassword;
        if (inputUsername == username && inputPassword == password)
        {
            cout << "Selamat datang, Master " << "!\n";
            break;
        }
        else
        {
            cout << "Login gagal. Coba lagi.\n";
            percobaan++;
        }
    }
    if (percobaan == maksimalPercobaan)
    {
        cout << "Akun Anda diblokir. Silakan hubungi administrator.\n";
    }
    return 0;
}