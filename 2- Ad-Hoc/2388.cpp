// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

struct Tac
{
    int t;
    int d;
    int v;
};

int main()
{

    int n, i, dist_total = 0;

    cin >> n;
    vector<Tac> tac(n);

    for (i = 0; i < n; i++)
    {
        cin >> tac[i].t >> tac[i].v;
        tac[i].d = tac[i].v * tac[i].t;
        dist_total += tac[i].d;
    }

    cout << dist_total << endl;

    return 0;
}