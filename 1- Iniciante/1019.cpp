#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int horas = N / 3600;
    int resto = N % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;
    
    return 0;
}