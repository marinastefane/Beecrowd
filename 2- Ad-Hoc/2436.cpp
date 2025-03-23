// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, C; // linhas e colunas do salao
    int A, B; // posicao inicial do robo
    cin >> L >> C;
    cin >> A >> B;

    vector<vector<int>> sala(L, vector<int>(C));
    set<pair<int, int>> visitados;

    // matriz da sala
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> sala[i][j];
        }
    }

    // norte, sul, leste, oeste
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    int x = A - 1;
    int y = B - 1;

    if (sala[x][y] != 1)
    {
        cout << A << " " << B << endl; // Saída direta da posição inicial
        return 0;
    }

    visitados.insert({x, y}); // marca a posicao inicial como visitado

    while (true)
    {
        bool moveu = false;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];

            // verifica se esta nos limites e se o ladrilho é preto e nao foi visitada
            if (nx >= 0 && nx < L && ny >= 0 && ny < C && sala[nx][ny] == 1 && !visitados.count({nx, ny}))
            {
                visitados.insert({nx, ny});
                x = nx;
                y = ny;
                moveu = true;
                break;
            }
        }

        // parou de se mover, acaba
        if (!moveu)
        {
            break;
        }
    }
    cout << x + 1 << " " << y + 1 << endl;
    return 0;
}