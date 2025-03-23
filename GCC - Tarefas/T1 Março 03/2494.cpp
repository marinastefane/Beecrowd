#include <bits/stdc++.h>

using namespace std;

int mdc(int F1, int F2)
{
    if (F2 == 0)
    {
        return F1;
    }
    return mdc(F2, F1 % F2);
}

int main()
{
    int A, P, N;
    
    while (cin >> A >> P >> N)
    {
        int soma = A + P;
        int tamanhoMaiorPacote = mdc(A, P);
        int numeroPacotes = soma / tamanhoMaiorPacote;

        if (numeroPacotes >= N)
        {
            cout << "sim";
        }
        else
        {
            cout << "nao";
        }
        
        cout << endl;
    }

    return 0;
}
