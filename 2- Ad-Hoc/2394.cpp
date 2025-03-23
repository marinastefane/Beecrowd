#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, M, aux, menor_tempo = INT_MAX, ans;

    cin >> N >> M;

    // vector<vector<int>> voltas(N, std::vector<int>(M));
    vector<int> alunos_tempo(N, 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> aux;
            alunos_tempo[i] += aux;
        }
        if (alunos_tempo[i] < menor_tempo)
        {
            menor_tempo = alunos_tempo[i];
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}