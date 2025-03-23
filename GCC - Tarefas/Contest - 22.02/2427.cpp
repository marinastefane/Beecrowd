#include <bits/stdc++.h>

using namespace std;

int main()
{

    int L, quantidade = 1;
    cin >> L;

    while (L >= 2)
    {
        L /= 2;
        quantidade *= 4;
    }

    cout << quantidade << endl;

    return 0;
}