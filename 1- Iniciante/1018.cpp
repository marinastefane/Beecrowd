#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;

   int valorOriginal = N;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int qtoNotas[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        qtoNotas[i] = N / notas[i];
        N %= notas[i];
    }

    cout << valorOriginal << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << qtoNotas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }

    return 0;
}