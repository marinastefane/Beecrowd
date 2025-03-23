// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    string comp, input;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        bool first = true;
        cin >> k;
        cin >> input;
        comp = input;

        for (int i = 0; i < k - 1; i++)
        {
            cin >> input;

            if (comp != input)
                first = false;

            comp = input;
        }

        if (first)
            cout << comp << endl;
        else
            cout << "ingles" << endl;
    }

    return 0;
}