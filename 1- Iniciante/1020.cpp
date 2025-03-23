#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int ano = N / 365;
    int resto = N % 365;
    int meses = resto / 30;
    int dias = resto % 30;

    cout << ano << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;
    
    return 0;
}