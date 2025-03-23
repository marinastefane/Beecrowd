#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // soma de todos os numeros
    int total = accumulate(arr, arr + N, 0);
    int i = 0;
    int somaMetade = 0;

    while (i < N)
    {
        somaMetade += arr[i];
        i++;
        if (somaMetade == total / 2)
        {
            break;
        }
    }

    cout << i << endl;
    return 0;
}