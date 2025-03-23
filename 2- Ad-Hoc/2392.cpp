// Augusto Soares, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> sapos(M);
    for (int i = 0; i < M; i++)
    {
        cin >> sapos[i].first >> sapos[i].second;
    }

    vector<int> pedras(N, 0); // Inicializa todas as pedras como 0

    for (int j = 0; j < M; j++)
    {
        int pos = sapos[j].first;
        int dist = sapos[j].second;

        // Pula para frente
        for (int p = pos; p <= N; p += dist)
        {
            pedras[p - 1] = 1;
        }

        // Pula para trás
        for (int p = pos - dist; p >= 1; p -= dist)
        {
            pedras[p - 1] = 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << pedras[i] << endl;
    }

    return 0;
}