#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        vector<string> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int eco = 0;
        for (int i = 1; i < N; i++)
        {
            int pref = 0;
            while (pref < arr[i - 1].size() && arr[i - 1][pref] == arr[i][pref])
            {
                pref++;
            }
            eco += pref;
        }

        cout << eco << endl;
    }

    return 0;
}