// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> habilidades(1 << N);
    for (int i = 0; i < (1 << N); i++) {
        cin >> habilidades[i];
    }
    
    int habJuquinha = habilidades[0];

    int maisFortes = 0;
    int maisFracos = 0;
    
    for (int i = 1; i < (1 << N); i++) {
        if (habilidades[i] > habJuquinha) {
            maisFortes++;
        } else {
            maisFracos++;
        }
    }
    return 0;
}