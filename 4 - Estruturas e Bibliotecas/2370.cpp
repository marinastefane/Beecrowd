#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// facilita
struct Aluno
{
    string nome;
    int habilidade;
};

// função compara habilidade
bool comparaHabilidade(const Aluno &a, const Aluno &b)
{
    return a.habilidade > b.habilidade;
}

int main()
{
    int N, T;
    cin >> N >> T;

    vector<Aluno> alunos(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> alunos[i].nome >> alunos[i].habilidade;
    }

    // ordena alunos pela habilidade
    sort(alunos.begin(), alunos.end(), comparaHabilidade);

    vector<vector<string>> times(T);

    for (int i = 0; i < N; ++i)
    {
        times[i % T].push_back(alunos[i].nome);
    }

    for (int i = 0; i < T; ++i)
    {
        cout << "Time " << (i + 1) << endl;

        sort(times[i].begin(), times[i].end());
        for (const auto &nome : times[i])
        {
            cout << nome << endl;
        }
        cout << endl;
    }

    return 0;
}
