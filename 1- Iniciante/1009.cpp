#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double salarioFixo, vendas;

    cin >> nome >> salarioFixo >> vendas;
    
    cout << fixed << setprecision(2);
    double TOTAL = (salarioFixo + (0.15 * vendas));

    cout << "TOTAL = R$ " << TOTAL << endl;

    return 0;
}