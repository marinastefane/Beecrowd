// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, n, v = 0;
    cin >> a;
    cin >> n;
    vector<int> f(n);

    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        if (f[i] * a >= 40000000)
            v++;
    }

    cout << v << endl;

    return 0;
}