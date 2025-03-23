#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int KM;
    double litros;

    cin >> KM >> litros;
    
    double consMedio = KM / litros;

    cout << fixed << setprecision(3);
    cout << consMedio << " km/l" << endl;

    return 0;
}