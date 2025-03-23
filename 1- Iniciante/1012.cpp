#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C;
    double pi = 3.14159;

    cin >> A >> B >> C;

    cout << fixed << setprecision(2);
    double TRIANGULO = ((A * C) / 2);
    double CIRCULO = pi * pow(C, 2);
    double TRAPEZIO = ((C / 2) * (A + B));
    double QUADRADO = pow(B, 2);
    double RETANGULO = (A * B);

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;

    return 0;
}