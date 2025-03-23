#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    double A, B, C;
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;

    double MEDIA = ((2 * A) + (3 * B) + (5 * C)) / 10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}