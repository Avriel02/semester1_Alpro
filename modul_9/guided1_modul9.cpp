#include <iostream>
using namespace std;
// Fungsi untuk mengurutkan data secara ascending dengan Bubble Sort
void bubbleSortAscending(double arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Tukar elemen jika tidak dalam urutan
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Fungsi untuk mengurutkan data secara descending dengan Bubble Sort
void bubbleSortDescending(double arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // Tukar elemen jika tidak dalam urutan
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Fungsi untuk menampilkan elemen array
void displayArray(double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;
    double arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Mengurutkan secara ascending
    bubbleSortAscending(arr, n);
    cout << "Array setelah diurutkan secara ascending: ";
    displayArray(arr, n);
    // Mengurutkan secara descending
    bubbleSortDescending(arr, n);
    cout << "Array setelah diurutkan secara descending: ";
    displayArray(arr, n);
    return 0;
}
