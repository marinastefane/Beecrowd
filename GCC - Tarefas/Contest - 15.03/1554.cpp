// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

struct Bola
{
    int x, y;
    float dist;
};

// #define DBL_MAX  1.79769e+308
int main()
{

    int c, n;

    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        vector<Bola> coord_bolas(n + 1); // sendo que primeira bola é a branca
        cin >> coord_bolas[0].x >> coord_bolas[0].y;

        float menor = DBL_MAX;
        int menor_idx = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> coord_bolas[i].x >> coord_bolas[i].y;

            coord_bolas[i].dist = sqrt(pow((coord_bolas[0].x - coord_bolas[i].x), 2) + pow((coord_bolas[0].x - coord_bolas[i].y), 2));

            float test = coord_bolas[i].dist + 0.01;

            if (test < menor)
            {
                menor = coord_bolas[i].dist;
                menor_idx = i;
            }
        }

        if (menor_idx)
            cout << menor_idx << '\n';
    }

    return 0;
}