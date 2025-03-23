#include <bits/stdc++.h>

using namespace std;

struct Team
{
    int num, hp = 0, hps = 0, tp = 0; // team number,  hoop points, hoop points suffered, tournament points
    double ha = 0;                    // hoop avg
};

int main()
{

    int n, x, y, z, w, inst = 0;
    bool first = true;

    while (cin >> n)
    {
        inst++;
        if (n == 0)
            break;
        if (!first)
            cout << endl;
        else
            first = false;

        vector<Team> teams(n);

        for (int i = 1; i <= n; i++)
            teams[i - 1].num = i;

        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            cin >> x >> y >> z >> w;

            if (y > w)
            {
                teams[z - 1].tp++;
                teams[x - 1].tp += 2;
            }
            else
            {
                teams[x - 1].tp++;
                teams[z - 1].tp += 2;
            }

            teams[x - 1].hp += y;
            teams[x - 1].hps += w;

            teams[z - 1].hp += w;
            teams[z - 1].hps += y;

            if (teams[x - 1].hps == 0)
                teams[x - 1].ha = (double)teams[x - 1].hp;
            else
                teams[x - 1].ha = (double)teams[x - 1].hp / teams[x - 1].hps;

            if (teams[z - 1].hps == 0)
                teams[z - 1].ha = (double)teams[z - 1].hp;
            else
                teams[z - 1].ha = (double)teams[z - 1].hp / teams[z - 1].hps;
        }

        sort(teams.begin(), teams.end(),
             [](const Team &a, Team const &b)
             {
                 if (a.tp != b.tp)
                     return (a.tp > b.tp);
                 else if (a.ha != b.ha)
                     return (a.ha > b.ha);
                 else if (a.hp != b.hp)
                     return (a.hp > b.hp);
                 else
                     return (a.num < b.num);
             });

        cout << "Instancia " << inst << endl;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
                cout << " ";
            cout << teams[i].num;
        }
        cout << endl;
    }

    return 0;
}