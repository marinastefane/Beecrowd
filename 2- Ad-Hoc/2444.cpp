// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, a;

    cin >> v >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;

        v += a;

        if (v < 0)
            v = 0;
        if (v > 100)
            v = 100;
    }

    cout << v << endl;

    return 0;
}