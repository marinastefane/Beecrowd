#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double N;
    cin >> N;

    double valorOriginal = N;

    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};

    int qtoNotas[6] = {0};
    int qtoMoedas[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        qtoNotas[i] = N / notas[i];
        N -= qtoNotas[i] * notas[i];
    }

    for (int i = 0; i < 6; i++)
    {
        qtoMoedas[i] = N / moedas[i];
        N -= qtoMoedas[i] * moedas[i];
    }

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << qtoNotas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;
    }

    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << qtoMoedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
    }

    return 0;
}