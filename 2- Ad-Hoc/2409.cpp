#include <iostream>
using namespace std;

int main()
{
    int A, B, C, H, L;
    cin >> A >> B >> C;
    cin >> H >> L;

    if ((A <= H && B <= L) || (A <= L && B <= H) ||
        (A <= H && C <= L) || (A <= L && C <= H) ||
        (B <= H && C <= L) || (B <= L && C <= H))
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}