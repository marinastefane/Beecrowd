// Augusto Soares, Luan Marcelino, Marina Delfino

#include <cstdio>

#define LIMITE 1000000
typedef long long ll;
ll somaDiv[LIMITE] = {0}, divino[LIMITE] = {0};

int main()
{

    // calcula a soma dos divisores pra cada numero de 1 a LIMITE
    for (ll i = 1; i <= LIMITE; i++)
    {
        // percorre todos multiplos de i
        for (ll j = i; j <= LIMITE; j += i)
        {
            // adiciona i como divisor de j
            somaDiv[j] += i;
        }
    }
    // somatorio das somas dos divisores
    for (ll i = 1; i <= LIMITE; i++)
    {
        divino[i] = divino[i - 1] + somaDiv[i];
    }

    int N;
    while (scanf("%d", &N) == 1 && N != 0)
    {
        if (N > LIMITE || N < 1)
        {
            continue;
        }
        printf("%lld\n", divino[N]);
    }

    return 0;
}