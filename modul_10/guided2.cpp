#include <iostream>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
void selectionSortAscending(char arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void selectionSortDescending(char arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}
void printArray(const char arr[], int n)
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
    char data[size] = {'c', 'a', 'e', 'b', 'd'};
    cout << "Original Array: ";
    printArray(data, size);
    selectionSortAscending(data, size);
    cout << "Ascending Sorted Array: ";
    printArray(data, size);
    selectionSortDescending(data, size);
    cout << "Descending Sorted Array: ";
    printArray(data, size);
    return 0;
}