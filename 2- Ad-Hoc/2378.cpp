#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, s, e, t = 0;
    bool excedeu = false;

    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        t += e - s;
        if (t > c)
        {
            excedeu = true;
        }
    }

    if (excedeu)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}