// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

double volume(double h, double b, double B, double H)
{
    // raio na altura atual
    double raioAltura = b + ((B - b) / H) * h;
    // volume ate a altura
    return (PI * h / 3.0) * (pow(raioAltura, 2) + raioAltura * b + pow(b, 2));
}

double altura(double refriIndi, double b, double B, double H)
{
    // busca binaria
    double l = 0.0, r = H; // definidos os limites de busca (altura minima e maxima do copo)
    double mid;            // ponto medio
    int iteracoes = 1000;  // limite das iteracoes

    while (iteracoes--)
    {
        // ponto medio
        mid = (l + r) / 2.0;
        double vAtual = volume(mid, b, B, H);

        //
        if (fabs(vAtual - refriIndi) < 1e-9)
        {
            return mid;
        }
        if (vAtual < refriIndi)
            l = mid; // aumentar a altura
        else
            r = mid; // diminuir a altura
    }
    return mid;
}
int main()
{
    int C; // numero de casos teste
    cin >> C;

    while (C--)
    {
        int N, L;
        cin >> N >> L;

        int b, B, H; // raio da base menor, maior, altura do copo
        cin >> b >> B >> H;

        // o que cada pessoa deve tomar, volume
        double refriIndi = (double)L / N;

        double h = altura(refriIndi, b, B, H);

        cout << fixed << setprecision(2) << h << endl;
    }
    return 0;
}
