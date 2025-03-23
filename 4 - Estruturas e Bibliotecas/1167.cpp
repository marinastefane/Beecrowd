#include <bits/stdc++.h>

using namespace std;

struct Crianca
{
    string nome;
    int num;
};

int main()
{

    int N;

    while (cin >> N)
    {
        if (N == 0)
            break;

        vector<Crianca> criancas(N);

        for (int i = 0; i < N; i++)
        {
            Crianca aux;
            cin >> aux.nome >> aux.num;
            criancas[i] = aux;
        }

        int counter = criancas[0].num, ref, counter_mod;
        if (counter % 2 == 0)
            ref = N - 1;
        else
            ref = 1;

        while (N != 1)
        {

            counter--;
            counter_mod = counter % N;

            if ((counter) % 2 == 0)
            { // impares sendo que foi tirado um do counter acima

                if (ref + counter_mod > (N - 1))
                    ref = (ref + counter_mod) % (N);
                else
                    ref += counter_mod;
            }
            else
            { // pares

                if (ref - counter_mod < 0)
                    ref = N + (ref - counter_mod);
                else
                    ref -= counter_mod;
            }

            N--;
            counter = criancas[ref].num;
            criancas.erase(criancas.begin() + ref);

            if (counter % 2 == 0)
            {
                ref--;
                if (ref == -1)
                    ref = N - 1;
            }
            else if (ref == N)
                ref = 0;
        }
        cout << "Vencedor(a): " << criancas[0].nome << endl;
    }

    return 0;
}