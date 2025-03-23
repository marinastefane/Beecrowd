#include <bits/stdc++.h>

using namespace std;

int main()
{

    int R, L, J;
    size_t pos, offset;
    string s_input;

    while (getline(cin, s_input))
    {

        pos = 0;
        R = INT_MIN;
        L = INT_MIN;
        J = INT_MIN;

        for (offset = 0; s_input[offset] != '+'; offset++)
            ;
        if (s_input[pos] != 'R')
            R = stoi(s_input.substr(pos, offset));

        pos = offset + 1;
        for (offset = pos; s_input[offset] != '='; offset++)
            ;
        if (s_input[pos] != 'L')
            L = stoi(s_input.substr(pos, offset));

        pos = offset + 1;
        for (offset = pos; s_input[offset] != '\0'; offset++)
            ;
        if (s_input[pos] != 'J')
            J = stoi(s_input.substr(pos, offset - 1));

        if (R == INT_MIN)
        {
            R = J - L;
            cout << R << endl;
        }
        else if (L == INT_MIN)
        {
            L = J - R;
            cout << L << endl;
        }
        else
        {
            J = R + L;
            cout << J << endl;
        }
    }

    return 0;
}