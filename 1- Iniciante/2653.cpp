#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> jewelry;
    string jewel;

    while (getline(cin, jewel))
    {
        jewelry.insert(jewel);
    }

    cout << jewelry.size() << endl;

    return 0;
}