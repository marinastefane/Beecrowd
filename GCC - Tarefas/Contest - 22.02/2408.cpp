// 2408
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    // coloca em um array pra facilitar a ordenaçao
    int pont[] = {A, B, C};

    // ordenar
    sort(pont, pont + 3);

    // exibe a segunda posicao do array
    cout << pont[1] << endl;

    return 0;
}
