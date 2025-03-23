// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, time_used = 0, i, used_until = 0;

    cin >> n;
    vector<int> t(n);

    for (i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    i = 0;
    while (i < n && n != 0)
    {

        if (i != 0 && t[i] <= t[i - 1] + 10)
            time_used += (10 - (used_until - t[i]));
        else
            time_used += 10;

        used_until = t[i] + 10;
        i++;
    }

    cout << time_used << endl;

    return 0;
}