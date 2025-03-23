#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codPeca1, numPeca1, codPeca2, numPeca2;
    double valorUni1, valorUni2;

    cin >> codPeca1 >> numPeca1 >> valorUni1;
    cin >> codPeca2 >> numPeca2 >> valorUni2;

    double VALOR_A_PAGAR = ((numPeca1 * valorUni1) + (numPeca2 * valorUni2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << VALOR_A_PAGAR << endl;

    return 0;
}