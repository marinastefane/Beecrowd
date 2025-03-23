// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

long long binpDec(const string &binario)
{
    return stoi(binario, 0, 2);
}

long long mdc(long long F1, long long F2)
{
    if (F2 == 0)
    {
        return F1;
    }
    return mdc(F2, F1 % F2);
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        string S1, S2;
        cin >> S1 >> S2;

        if (S1.size() < 2 || S1.size() > 30 || S2.size() < 2 || S2.size() > 30)
        {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
            continue;
        }
        else
        {

            long long num1 = binpDec(S1);
            long long num2 = binpDec(S2);

            long long mdcc = mdc(num1, num2);

            if (mdcc > 1)
            {
                cout << "Pair #" << i << ": All you need is love!" << endl;
            }
            else
            {
                cout << "Pair #" << i << ": Love is not all you need!" << endl;
            }
        }
    }
    return 0;
}