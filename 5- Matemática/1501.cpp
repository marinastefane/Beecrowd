// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

// conta os zeros à direita de N!
int countr_zero(int N, int base)
{
    int zeros = INT_MAX;     // começa com um valor muito grande
    int originalBase = base; // salvar base original

    // descobre os fatores primos da base
    for (int i = 2; i <= base; i++) // i = fator primo
    {
        if (base % i != 0)
            continue; // pula se 'fator' não divide a base

        int quantFatBase = 0; // quantas vezes 'fator' aparece na base
        while (base % i == 0)
        {
            quantFatBase++;
            base /= i; // divide a base pelo fator até não ser mais divisível
        }

        int quantFatFat = 0; // quantas vezes 'fator' aparece em N!
        for (long j = i; j <= N; j *= i)
        {
            quantFatFat += N / j; // soma os múltiplos de 'fator' no fatorial
        }

        // calcula quantos grupos completos de 'fator' podem formar na base
        zeros = min(zeros, quantFatFat / quantFatBase);
    }

    return zeros;
}

string decpBase(int numero, int base)
{
    stringstream ss;
    ss << uppercase << setbase(base) << numero;
    return ss.str();
}

// calcula o número de dígitos de N! na base B
int count_digits(int N, int base)
{
    if (N == 0 || N == 1)
        return 1; // 0! = 1 tem um dígito

    // para valores pequenos
    if (N <= 20)
    {
        long long fat = 1;
        for (int i = 2; i <= N; i++)
        {
            fat *= i;
        }

        // Calcula o número de dígitos de 'fat' na base 'base'
        int digitos = 0;
        while (fat > 0)
        {
            fat /= base;
            digitos++;
        }
        return digitos;
    }

    // para valores grandes
    double somaLog = 0.0;
    for (int i = 2; i <= N; i++)
    {
        somaLog += log(i); // soma os logaritmos dos números
    }
    return floor(somaLog / log(base)) + 1;
}

int main()
{
    int N, B;

    while (cin >> N >> B)
    {
        cout << countr_zero(N, B) << " " << count_digits(N, B) << endl;
    }
    return 0;
}