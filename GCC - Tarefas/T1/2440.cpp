// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

// vetor de vetores, cada posicao é um nó do grafo
vector<vector<int>> grafo;

// armazena nós já visitados
bool visitado[50000];

// Depth-First Search ou Busca em Profundidade
// parametro é o nó atual que esta sendo visitado
void dfs(int no)
{
    // atual = visitado
    visitado[no] = true;
    // percorre todos os vizinhos do no atual

    for (int vizinho : grafo[no])
    {
        // isso faz a busca continuar explorando a partir desse vizinho
        // a recursão garante que todos os nós conectados serão visitados
        if (!visitado[vizinho])
        {
            dfs(vizinho);
        }
    }
}

int main()
{

    int N, M; // numero de nós e numero de arestas
    cin >> N >> M;

    // inicia o grafo
    grafo.resize(N + 1);

    // le as arestas
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    // conta componentes conexos
    int componentes = 0;
    for (int i = 1; i <= N; i++)
    {
        if (!visitado[i])
        {
            componentes++;
            dfs(i);
        }
    }

    cout << componentes << endl;
    return 0;
}