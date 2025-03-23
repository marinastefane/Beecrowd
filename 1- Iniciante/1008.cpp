#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int NUMBER, horas;
    double valorHora;

    cin >> NUMBER >> horas >> valorHora;
    cout << "NUMBER = " << NUMBER << endl;

    cout << fixed << setprecision(2);
    double SALARY = (horas * valorHora);

    cout << "SALARY = U$ " << SALARY << endl;

    return 0;
}