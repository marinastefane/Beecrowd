// Augusto Soares, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, bombs;

    cin >> N;

    vector<int> status(N);
    for (int i = 0; i < N; i++)
    {
        cin >> status[i];
    }

    for (int i = 0; i < N; i++)
    {
        bombs = 0;
        if (i == 0)
        {
            if (status[0])
                bombs++;
            if (status[1])
                bombs++;
        }
        else if (i == N - 1)
        {
            if (status[N - 1])
                bombs++;
            if (status[N - 2])
                bombs++;
        }
        else
        {
            if (status[i - 1])
                bombs++;
            if (status[i])
                bombs++;
            if (status[i + 1])
                bombs++;
        }
        cout << bombs << endl;
    }

    return 0;
}