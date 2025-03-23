// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<pair<long long, int>> presentes;

        for (int i = 0; i < N; i++)
        {
            int id, h, w, l;
            cin >> id >> h >> w >> l;
            long long volume = (long long)h * w * l;
            presentes.push_back({volume, id});
        }

        sort(presentes.begin(), presentes.end(), [](const pair<long long, int> &a, const pair<long long, int> &b)
             {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second; });

        vector<int> resultado;
        for (int i = 0; i < K; i++)
        {
            resultado.push_back(presentes[i].second);
        }

        sort(resultado.begin(), resultado.end());

        for (int i = 0; i < K; i++)
        {
            if (i > 0)
                cout << " ";
            cout << resultado[i];
        }
        cout << endl;
    }

    return 0;
}
