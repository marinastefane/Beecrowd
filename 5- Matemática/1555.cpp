// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int x, y;
        cin >> x >> y;

        long long r = pow((3LL * x), 2) + pow(y, 2);
        long long b = 2LL * pow(x, 2) + pow((5LL * y), 2);
        long long c = -100LL * x + pow(y, 3);

        string maior_funcao;
        long long maior_valor;

        if (r >= b && r >= c)
        {
            cout << "Rafael ganhou" << endl;
        }
        else if (b >= r && b >= c)
        {
            cout << "Beto ganhou" << endl;
        }
        else
        {
            cout << "Carlos ganhou" << endl;
        }
    }
    return 0;
}