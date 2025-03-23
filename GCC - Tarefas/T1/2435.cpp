// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, d, v;
    double r1, r2;

    cin >> n1 >> d >> v;
    r1 = d * 3.6 / v;

    cin >> n2 >> d >> v;
    r2 = d * 3.6 / v;

    if (r1 < r2)
        cout << n1 << endl;
    if (r1 > r2)
        cout << n2 << endl;

    return 0;
}
