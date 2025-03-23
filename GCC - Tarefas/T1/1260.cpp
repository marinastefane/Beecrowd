#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string linha;

    cin >> N;
    cin.ignore();
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        map<string, int> contarEspecies;
        int total = 0;

        while (getline(cin, linha) && !linha.empty())
        {
            contarEspecies[linha]++;
            total++;
        }

        vector<string> especies;
        for (const auto &par : contarEspecies)
        {
            especies.push_back(par.first);
        }
        sort(especies.begin(), especies.end());

        if (i > 0)
        {
            cout << "\n";
        }

        for (int j = 0; j < especies.size(); j++)
        {
            string especie = especies[j];
            double p = (contarEspecies[especie] * 100.0 / total);
            cout << especie << " " << fixed << setprecision(4) << p << "\n";
        }
    }

    return 0;
}