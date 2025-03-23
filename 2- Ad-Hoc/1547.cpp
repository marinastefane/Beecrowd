// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, qt, s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> qt >> s;
        vector<int> qts(qt), diferencas(qt), posicoes(qt);
        int menor, posicao = 1;
        for (int j = 0; j < qt; j++)
        {
            cin >> qts[j];
            diferencas[j] = abs(s - qts[j]);
        }
        menor = diferencas[0];

        for (int j = 0; j < qt; j++)
        {
            if (diferencas[j] < menor)
            {
                menor = diferencas[j];
                posicao = j + 1;
            }
        }
        cout << posicao << endl;
    }

    return 0;
}
