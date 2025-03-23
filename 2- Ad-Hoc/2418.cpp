// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n[5], menor, maior, soma;

    cin >> n[0];
    menor = n[0];
    maior = n[0];
    soma = n[0];

    for (int i = 1; i < 5; i++)
    {
        cin >> n[i];
        soma += n[i];
        if (n[i] < menor)
        {
            menor = n[i];
        }
        if (n[i] > maior)
        {
            maior = n[i];
        }
    }
    soma -= (menor + maior);

    cout << fixed << setprecision(1) << soma << endl;

    return 0;
}