#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int N;
    cin >> N;

    vector<ll> sequencia(N);

    if (N <= 2)
    {
        cout << 1 << endl;
        return 0;
    }

    for (ll i = 0; i < N; i++)
    {
        cin >> sequencia[i];
    }

    vector<ll> razoes;

    for (ll i = 0; i < N - 1; i++)
    {
        razoes.push_back(sequencia[i + 1] - sequencia[i]);  
    }
    
    int count = 1;
    
    for (size_t i = 1; i < razoes.size(); i++)
    {
        
        if (razoes[i] != razoes[i - 1])
        {
            count++;
            i++;
        }
    }
    cout << count << endl;

    return 0;
}