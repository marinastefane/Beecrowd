// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;
#include <queue>
#include <vector>

int main()
{
    int N, H;

    while (cin >> N >> H)
    {
        vector<priority_queue<int>> tarefas(H + 1);

        int dinheiro = 0;

        for (int i = 0; i < N; i++)
        {
            int v, t;
            cin >> v >> t;
            dinheiro += v;
            tarefas[t].push(v);
        }

        for (int i = H; i >= 1; i--)
        {
            int maior = 0;
            int maior_pos = 0;

            for (int j = H; j >= i; j--)
            {
                if (!tarefas[j].empty() && tarefas[j].top() > maior)
                {
                    maior = tarefas[j].top();
                    maior_pos = j;
                }
            }

            if (maior_pos > 0)
            {
                dinheiro -= maior;
                tarefas[maior_pos].pop();
            }
        }

        cout << dinheiro << endl;
    }

    return 0;
}
