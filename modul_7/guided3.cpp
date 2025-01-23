#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    char jawaban;
    char hurufKomputer;
    int pencacah = 0;

    hurufKomputer = (char)(97 + rand() % ((90 + 1) - 97));
    do
    {
        cout << "Percobaan Anda ke " << pencacah << " : ";
        cin >> jawaban;
        pencacah++;
    } while (jawaban != hurufKomputer);
    cout << "Anda benar..." << endl;
    
    return 0;
}