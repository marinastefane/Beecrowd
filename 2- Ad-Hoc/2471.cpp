#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> quadrado(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> quadrado[i][j];
        }
    }

    vector<int> somaLinhas(N, 0), somaColunas(N, 0);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            somaLinhas[i] += quadrado[i][j];
            somaColunas[j] += quadrado[i][j];
        }
    }

    int M = (somaLinhas[0] == somaLinhas[1]) ? somaLinhas[0] : somaLinhas[2];

    int linhaErrada = -1, colunaErrada = -1;
    for (int i = 0; i < N; ++i)
    {
        if (somaLinhas[i] != M)
            linhaErrada = i;
        if (somaColunas[i] != M)
            colunaErrada = i;
    }

    int valorAlterado = quadrado[linhaErrada][colunaErrada];
    int valorOriginal = valorAlterado + (M - somaLinhas[linhaErrada]);

    cout << valorOriginal << " " << valorAlterado << endl;
}