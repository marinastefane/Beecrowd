// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, y, ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        ans = x * y / 2;

        cout << ans << " cm2" << endl;
    }

    return 0;
}