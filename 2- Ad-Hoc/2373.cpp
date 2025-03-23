#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, c, c_quebrados = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> c;
        if (l > c)
        {
            c_quebrados += c;
        }
    }

    cout << c_quebrados << endl;

    return 0;
}
