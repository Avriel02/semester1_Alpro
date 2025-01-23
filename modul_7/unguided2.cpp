#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    char jawaban;
    char hurufKomputer;
    int pencacah = 1;
    const int maxPercobaan = 3;

    hurufKomputer = (char)(97 + rand() % ((90 + 1) - 97));
    do
    {
        cout << "Percobaan Anda ke " << pencacah << " : ";
        cin >> jawaban;
        pencacah++;

        if (jawaban != hurufKomputer && pencacah > maxPercobaan)
        {
            cout << "Anda kalah yahaha" << endl;
            return 0;
        }
    } while (jawaban != hurufKomputer);
    
    cout << "Selamat!! Anda benar." << endl;
    
    return 0;
}
