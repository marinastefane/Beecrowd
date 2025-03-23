// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, soma;

    while (true)
    {
        cin >> n >> k;

        if (n == 0 && k == 0)
            break;

        soma = 0;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int cont;
        for (int i = 0; i < n; i++)
        {
            cont = 1;
            for (int j = i + 1; j < n; j++)
                if (p[i] == p[j])
                    cont++;
            if (cont == k)
                soma++;
        }

        cout << soma << endl;
    }

    return 0;
}
