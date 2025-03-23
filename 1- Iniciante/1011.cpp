#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3),
// pois algumas linguagens (dentre elas o C++),
// assumem que o resultado da divisão entre dois inteiros
// é outro inteiro.

int main()
{
    double pi = 3.14159;
    double raio, volume;

    cin >> raio;

    volume = (4.0 / 3) * pi * pow(raio, 3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

    return 0;
}