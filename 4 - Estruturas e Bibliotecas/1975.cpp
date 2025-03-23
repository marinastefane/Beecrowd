// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;
#include <locale.h>
#include <string>

struct Aluno
{
    string nome;
    vector<string> respostas;
    int cont = 0;

    void adicionarResposta(const string &resposta)
    {
        respostas.push_back(resposta);
    }
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int p, a, r, maior;
    vector<string> nomes;

    while (true)
    {
        cin >> p >> a >> r;
        if (p == 0 && a == 0 && r == 0)
        {
            break;
        }
        cin.ignore();
        maior = 0;

        string linhas[p];
        Aluno alunos[a];

        for (int i = 0; i < p; i++)
        {
            getline(cin, linhas[i]);
        }

        for (int i = 0; i < a; i++)
        {
            getline(cin, alunos[i].nome);

            for (int j = 0; j < r; j++)
            {
                string resposta;
                getline(cin, resposta);
                alunos[i].adicionarResposta(resposta);
                for (int k = 0; k < p; k++)
                {
                    if (resposta == linhas[k])
                    {
                        alunos[i].cont++;
                    }
                }
            }
            if (alunos[i].cont >= maior)
            {
                maior = alunos[i].cont;
            }
        }

        for (int i = 0; i < a; i++)
        {
            int cont = 0;
            if (alunos[i].cont == maior)
            {
                nomes.push_back(alunos[i].nome);
            }
        }

        sort(nomes.begin(), nomes.end());
        nomes.erase(unique(nomes.begin(), nomes.end()), nomes.end());

        for (int i = 0; i < nomes.size(); i++)
        {
            cout << nomes[i];
            if (i < nomes.size() - 1)
            { // Evita adicionar ", " no �ltimo nome
                cout << ", ";
            }
        }
        cout << endl;

        nomes.clear();
    }

    return 0;
}