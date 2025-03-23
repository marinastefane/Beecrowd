// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans = 0;
        cin >> m;

        vector<pair<int, int>> notas(m);

        for (int i = 0; i < m; i++)
        {
            cin >> notas[i].first;
            notas[i].second = i;
        }

        sort(notas.begin(), notas.end(),
             [](const pair<int, int> &a, const pair<int, int> &b)
             {
                 return a.first > b.first;
             });

        for (int i = 0; i < m; i++)
        {
            if (i == notas[i].second)
                ans++;
            // cout << i << " x " << notas[i].second << "--> " << notas[i].first <<  endl;
        }

        cout << ans << endl;
    }

    return 0;
}