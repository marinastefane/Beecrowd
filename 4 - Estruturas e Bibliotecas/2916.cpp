// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;

    while (cin >> n >> k)
    {
        vector<int> notas(n);

        for (int i = 0; i < n; i++)
        {
            cin >> notas[i];
        }

        sort(notas.rbegin(), notas.rend());

        long long soma = 0;
        for (int i = 0; i < k; i++)
            soma = (soma + notas[i]) % 1000000007;

        cout << soma << endl;
    }

    return 0;
}
