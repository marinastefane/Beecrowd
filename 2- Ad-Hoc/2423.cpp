#include <bits/stdc++.h>

using namespace std;

int main()
{

    int F, O, L, bolos = 0;

    cin >> F;
    cin >> O;
    cin >> L;

    while (F >= 2 && O >= 3 && L >= 5)
    {

        bolos++;
        F -= 2;
        O -= 3;
        L -= 5;
    }

    cout << bolos << endl;

    return 0;
}