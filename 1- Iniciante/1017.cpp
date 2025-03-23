#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float velocidade, tempo;
    float consumo = 12;

    cin >> tempo;
    cin >> velocidade;

    float distancia = velocidade * tempo;
    float litros = distancia / consumo;

    cout << fixed << setprecision(3);
    cout << litros << endl;

    return 0;
}