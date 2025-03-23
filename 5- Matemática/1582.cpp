// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

bool mdc(vector<int> l)
{

    int maior = l[2];
    bool ans = false;

    for (int i = 2; i < maior; i++)
    {
        if (l[0] % i == 0 && l[1] % i == 0 && l[2] % i == 0)
        {
            ans = true;
            break;
        }
    }

    return ans;
}

bool pit(vector<int> l)
{
    
    bool ans = false;

    if ((pow(l[0], 2)) + (pow(l[1], 2)) == (pow(l[2], 2)))
        ans = true;

    return ans;
}

int main()
{

    vector<int> l(3);

    while (cin >> l[0])
    {
        cin >> l[1] >> l[2];
        sort(l.begin(), l.end());

        bool ans1 = pit(l);
        bool ans2 = mdc(l);

        if (ans1)
            if (!ans2)
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        else
            cout << "tripla" << endl;
    }

    return 0;
}