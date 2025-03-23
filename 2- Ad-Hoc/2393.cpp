// Augusto Soares, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, ans = 0, Xi, Xf, Yi, Yf;

    cin >> N;

    vector<vector<bool>> grid(102, vector<bool>(102, false));

    for (int i = 0; i < N; i++)
    {

        cin >> Xi >> Xf >> Yi >> Yf;

        Xi--;
        Xf--;
        Yi--;
        Yf--;

        for (int i = Yi; i < Yf; i++)
            for (int j = Xi; j < Xf; j++)
                grid[i][j] = true;
    }

    for (int i = 0; i < 102; i++)
    {
        for (int j = 0; j < 102; j++)
        {
            if (grid[i][j])
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}