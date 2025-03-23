// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int mdc(int F1, int F2)
{
    if (F2 == 0)
    {
        return F1;
    }
    return mdc(F2, F1 % F2);
}
int main()
{
    int C;
    cin >> C;

    while (C--)
    {
        int F1, F2;
        cin >> F1 >> F2;
        cout << mdc(F1, F2) << endl;
    }

    return 0;
}