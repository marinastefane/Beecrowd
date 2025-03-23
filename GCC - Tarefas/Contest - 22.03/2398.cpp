#include <bits/stdc++.h>

using namespace std;

int calcularDistancia(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) + abs(y2 - y1); // Distância Manhattan
}

int main()
{
    int N, K;
    cin >> N >> K;

    // armazena pistas (D(X,Y))
    vector<pair<int, pair<int, int>>> pistas;

    for (int i = 0; i < K; ++i)
    {
        int X, Y, D;
        cin >> X >> Y >> D;

        // adiciona pista ao vetor se nao estiver fora dos limites
        if (X >= 0 && X < N && Y >= 0 && Y < N)
        {
            pistas.push_back({D, {X, Y}});
        }
        // pista invalida == acaba boom
        else
        {
            return 0;
        }
    }

    vector<pair<int, int>> possiveisPosicoes;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            bool valido = true;

            for (auto pista : pistas)
            {
                // pega a posicao e calcula a distancia para a pista
                int distanciaCalculada = calcularDistancia(i, j, pista.second.first, pista.second.second);
                // se a distancia encotrada da posição ate a pista for diferente de D
                if (distanciaCalculada != pista.first)
                {
                    // invalido
                    valido = false;
                    // boom
                    break;
                }
            }

            if (valido)
            {
                possiveisPosicoes.push_back({i, j});
                // adiciona a posicao no vetor
            }
        }
    }

    // verifica o numero de posicoes validas
    // mais de uma
    if (possiveisPosicoes.size() > 1)
    {
        cout << "-1 -1" << endl;
    }
    // apenas uma
    else if (possiveisPosicoes.size() == 1)
    {
        cout << possiveisPosicoes[0].first << " " << possiveisPosicoes[0].second << endl;
    }
    //nenhuma
    else
    {
        cout << "-1 -1" << endl;
        
    }

    return 0;
}