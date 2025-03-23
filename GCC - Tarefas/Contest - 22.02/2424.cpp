#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y;
    pair<int, int> limiteX;
    pair<int, int> limiteY;

    limiteX.first = 0;
    limiteX.second = 432;
    limiteY.first = 0;
    limiteY.second = 468;

    cin >> X;
    cin >> Y;

    if (X > limiteX.second || Y > limiteY.second || limiteX.first > X || limiteY.first > Y)
        cout << "fora" << endl;
    else
        cout << "dentro" << endl;

    return 0;
}