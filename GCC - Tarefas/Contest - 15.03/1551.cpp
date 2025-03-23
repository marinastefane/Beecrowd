// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    // preenche a frase
    for (int i = 0; i < N; i++)
    {
        string frase;
        getline(cin, frase);

        // separa e armazena letras unicas
        set<char> letrasUnicas;

        // percorre a frase toda
        for (char c : frase)
        {
            // verifica se e uma letra do alfabeto
            if (isalpha(c))
            {
                // adiciona ao conjunto
                letrasUnicas.insert(c);
            }
        }
        // tamanho
        int quantLetras = letrasUnicas.size();

        if (quantLetras == 26)
        {
            cout << "frase completa" << endl;
        }
        else if (quantLetras >= 13)
        {
            cout << "frase quase completa" << endl;
        }
        else
        {
            cout << "frase mal elaborada" << endl;
        }
    }

    return 0;
}
