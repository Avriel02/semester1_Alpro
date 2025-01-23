#include <iostream>
using namespace std;
void insertionSortAscending(char arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
void insertionSortDescending(char arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
void printArray(char arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    const int size = 5;
    char data[size] = {'c', 'a', 'b', 'd', 'e'};
    cout << "Data Awal: ";
    printArray(data, size);
    insertionSortAscending(data, size);
    cout << "Data Setelah Diurutkan (Ascending): ";
    printArray(data, size);
    insertionSortDescending(data, size);
    cout << "Data Setelah Diurutkan (Descending): ";
    printArray(data, size);
    return 0;
}