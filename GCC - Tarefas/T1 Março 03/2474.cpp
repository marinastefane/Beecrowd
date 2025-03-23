// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n)
{
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{

    long long N, ans;

    while (cin >> N)
    {

        if (is_prime(N))
            ans = N - 1;
        else
            ans = N - 2;

        cout << ans << endl;
    }

    return 0;
}