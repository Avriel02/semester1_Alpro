#include <iostream>
using namespace std;
const int panjangArray = 10;
int tempatTukar;
// Definisi fungsi bubbleSortDesc di luar fungsi main
void bubbleSortDesc(int data[])
{
    for (int b = 0; b < panjangArray - 1; b++)
    {
        for (int c = 0; c < panjangArray - 1; c++)
        {
            if (data[c] < data[c + 1])
            {
                tempatTukar = data[c];
                data[c] = data[c + 1];
                data[c + 1] = tempatTukar;
            }
        }
    }
}
int main()
{
    int data[panjangArray] = {5, 2, 8, 3, 1, 7, 9, 4, 6, 10};
    // Memanggil fungsi bubbleSortDesc untuk mengurutkan array
    bubbleSortDesc(data);
    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan secara descending: ";
    for (int i = 0; i < panjangArray; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}
