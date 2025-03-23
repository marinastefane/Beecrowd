// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int num = a * d + c * b;
    int den = b * d;

    int num1 = num;
    int num2 = den;

    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int mdc = num1;

    num /= mdc;
    den /= mdc;

    cout << num << " " << den << endl;
    return 0;
}