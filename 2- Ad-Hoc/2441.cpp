// Augusto Soares, Luan Marcelino, Marina Delfino

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int f1, f2, f3, area_coberta = 0;
    cin >> f1 >> f2 >> f3;

    vector<pair<int, int>> folhas = {{f1, f1 + 200}, {f2, f2 + 200}, {f3, f3 + 200}};

    sort(folhas.begin(), folhas.end());

    vector<pair<int, int>> mesclados;
    mesclados.push_back(folhas[0]);

    for (int i = 1; i < 3; i++)
    {
        int inicio = folhas[i].first;
        int fim = folhas[i].second;

        if (inicio <= mesclados.back().second)
            mesclados.back().second = max(mesclados.back().second, fim);
        else
            mesclados.push_back(folhas[i]);
    }

    for (auto intervalo : mesclados)
        area_coberta += (intervalo.second - intervalo.first) * 100;

    cout << 60000 - area_coberta << endl;

    return 0;
}