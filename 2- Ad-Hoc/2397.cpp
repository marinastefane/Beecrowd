#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    // se A > C troca A com C
    if (A > C)
        swap(A, C);
    // se B > C troca B com C
    if (B > C)
        swap(B, C);

    // mm triangulo é valido se a soma de dois lados for aior que o terceiro
    if (A + B > C)
    {
        if (pow(C, 2) == pow(A, 2) + pow(B, 2))
        {
            cout << "r" << endl;
        }
        else if (pow(C, 2) > pow(A, 2) + pow(B, 2))
        {
            cout << "o" << endl;
        }
        else if (pow(C, 2) < pow(A, 2) + pow(B, 2))
        {
            cout << "a" << endl;
        }
    }
    else
        cout << "n" << endl;

    return 0;
}