#include <bits/stdc++.h>
using namespace std;
#include <math.h>

int main()
{
    double n, a, l, p;

    cin >> n >> a >> l >> p;

    if (n <= a && n <= l && n <= p)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
