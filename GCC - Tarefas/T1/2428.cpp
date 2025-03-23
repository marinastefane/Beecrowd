// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int areas[4] = {a1, a2, a3, a4};
    sort(areas, areas + 4);
    a1 = areas[0];
    a2 = areas[1];
    a3 = areas[2];
    a4 = areas[3];

    int somaTotal = a1 + a2 + a3 + a4;

    for (int L = 1; L * L <= somaTotal; L++)
    {
        if (somaTotal % L == 0)
        {
            int A = somaTotal / L;

            // Verificar se podemos encontrar coordenadas x, y para as linhas divisórias
            for (int x = 1; x < L; x++)
            {
                for (int y = 1; y < A; y++)
                {
                    // Calcular as áreas das quatro regiões
                    int r1 = x * y; //sup esquerdo
                    int r2 = (L - x) * y; //sup direito
                    int r3 = x * (A - y); // inf esquerdo
                    int r4 = (L - x) * (A - y); // inf direito

                    // Ordenar as áreas calculadas
                    int regioes[4] = {r1, r2, r3, r4};
                    sort(regioes, regioes + 4);

                    // Verificar se as áreas calculadas correspondem às áreas dadas
                    if (regioes[0] == a1 && regioes[1] == a2 &&
                        regioes[2] == a3 && regioes[3] == a4)
                    {
                        cout << "S" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "N" << endl;
    return 0;
}