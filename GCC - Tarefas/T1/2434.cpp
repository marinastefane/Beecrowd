#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S, movimentacao; // numero de dias e saldo inicial
    cin >> N >> S;

    int saldoAtual = S;
    int menorSaldo = S;
    for (int i = 0; i < N; i++)
    {
        cin >> movimentacao;
        saldoAtual += movimentacao; //soma a movimentação ao saldo
        if (saldoAtual < menorSaldo) //se saldo atual for menor que o registrado atualiza
        {
            menorSaldo = saldoAtual;
        }
    }
    cout << menorSaldo << endl;
}