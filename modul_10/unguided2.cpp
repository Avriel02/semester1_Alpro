#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;

        // Temukan indeks nilai terkecil dari sisa array
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Tukar nilai terkecil dengan nilai pada indeks i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void displayScores(int arr[], int n)
{
    cout << "Nilai Ujian Mahasiswa Setelah Diurutkan:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ": " << arr[i] << endl;
    }
}

int main()
{
    const int jumlahMahasiswa = 10;
    int nilaiUjian[jumlahMahasiswa] = {85, 70, 95, 60, 75, 80, 90, 65, 88, 78};

    cout << "Nilai Ujian Mahasiswa Sebelum Diurutkan:" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ": " << nilaiUjian[i] << endl;
    }

    selectionSort(nilaiUjian, jumlahMahasiswa);

    cout << "\nNilai Ujian Mahasiswa Setelah Diurutkan:" << endl;
    displayScores(nilaiUjian, jumlahMahasiswa);

    return 0;
}
