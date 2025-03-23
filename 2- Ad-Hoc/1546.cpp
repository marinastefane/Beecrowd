// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, nome;
    string nomes[] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> nome;
            switch (nome)
            {
            case 1:
                cout << nomes[0];
                break;
            case 2:
                cout << nomes[1];
                break;
            case 3:
                cout << nomes[2];
                break;
            case 4:
                cout << nomes[3];
                break;
            }
            cout << endl;
        }
    }

    return 0;
}