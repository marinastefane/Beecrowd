#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qtde, i;

    cin >> qtde >> i;

    vector<string> nomes;

    for (int i = 0; i < qtde; i++)
    {
        string nome;
        cin >> nome;
        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end());

    cout << nomes[i - 1] << endl;

    return 0;
}