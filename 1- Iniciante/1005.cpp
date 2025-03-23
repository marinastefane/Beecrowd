#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    double A, B;
    cout << fixed << setprecision(1);
    cin >> A >> B;

    double MEDIA = ((3.5 * A) + (7.5 * B)) / 11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}