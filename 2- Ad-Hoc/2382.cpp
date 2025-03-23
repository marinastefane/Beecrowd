// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int l, a, p, r, d, l1, l2, l3;

    cin >> l >> a >> p >> r;

    d = r * 2;

    l1 = sqrt(pow(l, 2) + pow(a, 2));
    l2 = sqrt(pow(l, 2) + pow(p, 2));
    l3 = sqrt(pow(a, 2) + pow(p, 2));

    if (l1 < d && l2 < d && l3 < d)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}