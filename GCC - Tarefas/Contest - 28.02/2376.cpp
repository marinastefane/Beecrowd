#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // equipes
    vector<char> equipes = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                            'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};

    int M, N; // gols das equipes

    int num_equipes = 16; // 16 equipes e reduz até 1

    while (num_equipes > 1)
    {
        int novaPosicao = 0; // Índice para preencher os vencedores

        for (int i = 0; i < num_equipes; i += 2)
        {
            cin >> M >> N; // gols do jogo atual

            // Define o vencedor e armazena na posição correta
            if (M > N)
            {
                equipes[novaPosicao] = equipes[i]; // equipe esquerda ganha
            }
            else
            {
                equipes[novaPosicao] = equipes[i + 1]; // esquipe direita ganha
            }
            novaPosicao++;
        }

        num_equipes /= 2; // metade das equipes continua
    }

    cout << equipes[0] << endl;

    return 0;
}
