#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numPedra, pedraPresente;

    while (true)
    {
        cin >> numPedra >> pedraPresente;

        // condicao de parada
        if (numPedra == 0 && pedraPresente == 0)
            break;

        // pedra presente for 1, sempre alcançável
        if (pedraPresente == 1)
        {
            cout << "Let me try!" << endl;
            continue;
        }

        // pedra presente for maior que 34, automaticamente alcançável
        if (pedraPresente > 34)
        {
            cout << "Let me try!" << endl;
            continue;
        }

        queue<pair<int, int>> fila;    // pair = par de valores {posição atual, salto atual}
        set<pair<int, int>> visitados; // set nao permite elementos duplicados

        fila.push({1, 2});        // adicionar elementos na fila {começa na posição 1, com salto inicial de 2}
        visitados.insert({1, 2}); // adicionou 1 no conjunto "visitados"

        bool chegou = false;

        while (!fila.empty()) // verifica se esta vazia, se nao continua
        {
            pair<int, int> atual = fila.front(); // retorna o elemento da frente
            int posAtual = atual.first;          // primeiro elemento do par
            int salto = atual.second;            // segundo elemento do par
            fila.pop();

            // calcula a distancia do salto
            int distancia = (2 * salto) - 1;

            // onde posso ir, frente ou tras
            vector<int> novasPosicoes = {posAtual + distancia, posAtual - distancia};

            for (int novaPosicao : novasPosicoes)
            {
                if (novaPosicao == pedraPresente)
                {
                    chegou = true;
                    break;
                }

                // se esta dentro dos limites, verifica se já foi visitado
                if (novaPosicao >= 1 && novaPosicao <= numPedra && visitados.find({novaPosicao, salto + 1}) == visitados.end())
                {
                    // adiciona a posicao nao visitada a lista
                    fila.push({novaPosicao, salto + 1});
                    // garante que nao va visitar a mesma posicao, adicionando ela no conjunto
                    visitados.insert({novaPosicao, salto + 1});
                }
            }

            if (chegou)
                break;
        }

        if (chegou)
            cout << "Let me try!" << endl;
        else
            cout << "Don't make fun of me!" << endl;
    }

    return 0;
}