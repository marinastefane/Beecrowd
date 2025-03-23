#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numPedra, pedraPresente;
    vector<string> resultados; // Vetor para armazenar os resultados

    while (true)
    {
        cin >> numPedra >> pedraPresente;

        // Condição de parada
        if (numPedra == 0 && pedraPresente == 0)
            break;

        // Pedra presente for 1, sempre alcançável
        if (pedraPresente == 1)
        {
            resultados.push_back("Let me try!");
            continue;
        }

        // Pedra presente for maior que 34, automaticamente alcançável
        if (pedraPresente > 34)
        {
            resultados.push_back("Let me try!");
            continue;
        }

        queue<pair<int, int>> fila; // pair = par de valores {posição atual, salto atual}
        set<pair<int, int>> visitados; // Usar um set para controlar posição e salto

        fila.push({1, 2});          // Adicionar elementos na fila {começa na posição 1, com salto inicial de 2}
        visitados.insert({1, 2});   // Marca a posição inicial e o salto como visitados

        bool chegou = false;

        while (!fila.empty()) // Verifica se está vazia; se não, continua
        {
            pair<int, int> atual = fila.front(); // Retorna o elemento da frente
            int posAtual = atual.first;          // Primeiro elemento do par
            int salto = atual.second;            // Segundo elemento do par
            fila.pop();

            // Calcula a distância do salto
            int distancia = (2 * salto) - 1;

            // Tentar avançar e retroceder
            vector<int> novasPosicoes = {posAtual + distancia, posAtual - distancia};

            for (int novaPosicao : novasPosicoes)
            {
                if (novaPosicao == pedraPresente)
                {
                    chegou = true;
                    break;
                }

                if (novaPosicao >= 1 && novaPosicao <= numPedra && visitados.find({novaPosicao, salto + 1}) == visitados.end())
                {
                    fila.push({novaPosicao, salto + 1});
                    visitados.insert({novaPosicao, salto + 1});
                }
            }

            if (chegou)
                break;
        }

        if (chegou)
            resultados.push_back("Let me try!");
        else
            resultados.push_back("Don't make fun of me!");
    }

    // Imprimir todos os resultados armazenados no vetor
    for (const string &resultado : resultados)
    {
        cout << resultado << endl;
    }

    return 0;
}
