#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> carros;

    for (int i = 0; i < N; i++)
    {
        int tempoTotal = 0;
        for (int j = 0; j < M; j++)
        {
            int tempo;
            cin >> tempo;
            tempoTotal += tempo;
        }
        carros.push_back({tempoTotal, i + 1});
    }
    sort(carros.begin(), carros.end());

    cout << carros[0].second << endl;
    cout << carros[1].second << endl;
    cout << carros[2].second << endl;

    return 0;
}