#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int M, N, aux, need, days = 0;
    vector<long long int> subs;

    cin >> N >> M;

    need = M - N;

    for (int i = 0; i < 30; i++)
    {
        cin >> aux;
        subs.push_back(aux);
    }

    while (need > 0)
    {
        double avg = ceil(accumulate(subs.begin(), subs.end(), 0.0) / 30);

        need -= avg;
        days++;

        subs.erase(subs.begin());
        subs.push_back(avg);
    }

    cout << days << endl;

    return 0;
}