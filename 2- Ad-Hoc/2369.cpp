#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int valorFixo = 7;

    if (N <= 10)
    {
        valorFixo;
    }
    else if (N <= 30)
    {
        valorFixo += (N - 10) * 1;
    }
    else if (N <= 100)
    {
        valorFixo += 20 * 1;
        valorFixo += (N - 30) * 2;
    }
    else
    {
        valorFixo += 20 * 1;
        valorFixo += 70 * 2;
        valorFixo += (N - 100) * 5;
    }

    cout << valorFixo << endl;

    return 0;
}
