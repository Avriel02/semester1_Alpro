#include <iostream>
using namespace std;
void salam()
{
    cout << "Hello, selamat datang" << endl;
}
void salam(string nama)
{
    cout << "Hello, selamat datang, " << nama << endl;
}
int main()
{
    salam();
    salam("Kawan");
    return 0;
}