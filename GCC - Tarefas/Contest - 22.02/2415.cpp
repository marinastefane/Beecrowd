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

    int total = 1, count = 1; // o minimo que o numero pode aparecer

    // buscando a maior ocorrencia consecutiva do valor
    for (int i = 1; i < N; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;

            if (total < count)
            {
                total = count;
            }
        }
        else
        {
            count = 1;
        }
    }

    cout << total << endl;
    return 0;
}