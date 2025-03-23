#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int X, Y, Z;
    cin >> X >> Y >> Z;

    ll containerX = X / A;
    ll containerY = Y / B;
    ll containerZ = Z / C;

    ll totalContainers = containerX * containerY * containerZ;

    cout << totalContainers << endl;
    return 0;
}