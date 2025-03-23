// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

double encontrar_h_corte(vector<int> &comprimentos, int qtde, int a)
{
    double h_min = 0.0, h_max = *max_element(comprimentos.begin(), comprimentos.end());
    double h_corte = -1.0;

    while (h_max - h_min > 1e-9)
    { // Aumentar precisão da busca binária
        double h_atual = (h_min + h_max) / 2.0;
        double area_cortada = 0.0;

        for (int i = 0; i < qtde; i++)
        {
            if (comprimentos[i] > h_atual)
            {
                area_cortada += (comprimentos[i] - h_atual);
            }
        }

        if (area_cortada > a)
        {
            h_corte = h_atual;
            h_min = h_atual;
        }
        else
        {
            h_max = h_atual;
        }
    }

    return h_corte;
}

int main()
{
    int n, a;

    while (true)
    {
        cin >> n >> a;
        if (n == 0 && a == 0)
            break;

        vector<int> comprimentos(n);
        int soma = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> comprimentos[i];
            soma += comprimentos[i];
        }

        if (a == soma)
        {
            cout << ":D" << endl;
        }
        else if (a > soma)
        {
            cout << "-.-" << endl;
        }
        else
        {
            double h_corte = encontrar_h_corte(comprimentos, n, a);
            cout << fixed << setprecision(4) << round(h_corte * 10000) / 10000.0 << endl; // Arredondamento correto
        }
    }

    return 0;
}