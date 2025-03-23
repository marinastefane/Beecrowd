// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int NC; // numero de cidades
    cin >> NC;

    while (NC--)
    {
        int N;
        cin >> N;
        vector<int> alt(N);

        for (int i = 0; i < N; i++)
        {
            cin >> alt[i];
        }

        sort(alt.begin(), alt.end());

        for (int i = 0; i < N; i++)
        {
            if (i > 0)
            cout << " "; // espaço entre os números
            cout << alt[i];
            
        }
        cout << endl;
    }
    return 0;
}