#include <iostream>
int main()
{
    // Inisialisasi matriks pertama (A) dan matriks kedua (B)
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    // Matriks hasil perkalian (C)
    int C[2][2] = {{0, 0}, {0, 0}};
    // Melakukan perkalian matriks
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            for (int c = 0; c < 2; c++)
            {
                C[a][b] += A[a][c] * B[c][b];
            }
        }
    }
    // Menampilkan hasil perkalian matriks
    std::cout << "Hasil perkalian adalah:" << std::endl;
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            std::cout << C[a][b] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}