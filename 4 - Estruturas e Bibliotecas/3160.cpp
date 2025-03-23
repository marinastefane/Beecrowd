#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s_input, aux;
    vector<string> amigos1, amigos0;
    int i, size1 = 0, size0 = 0;
    bool primeiro = true;

    while (1)
    {
        getline(cin, s_input);
        if (s_input.find_first_not_of(" \t\n") != string::npos)
            break;
    }

    stringstream ss1(s_input);

    while (ss1 >> aux)
    {
        size1++;
        amigos1.push_back(aux);
    }

    while (1)
    {
        getline(cin, s_input);
        if (s_input.find_first_not_of(" \t\n") != string::npos)
            break;
    }

    stringstream ss0(s_input);

    while (ss0 >> aux)
    {
        size0++;
        amigos0.push_back(aux);
    }

    while (1)
    {
        cin >> aux;
        if (aux.find_first_not_of(" \t\r\n") != string::npos)
            break;
    }

    if (aux == "nao")
    {

        for (i = 0; i < size1; i++)
            if (primeiro)
            {
                primeiro = false;
                cout << amigos1[i];
            }
            else
                cout << " " << amigos1[i];

        for (i = 0; i < size0; i++)
        {
            if (primeiro)
            {
                primeiro = false;
                cout << amigos0[i];
            }
            else
                cout << " " << amigos0[i];
        }
    }
    else
    {

        for (i = 0; i < size1; i++)
        {

            if (amigos1[i] == aux)
                for (int y = 0; y < size0; y++)
                {
                    if (primeiro)
                    {
                        primeiro = false;
                        cout << amigos0[y];
                    }
                    else
                        cout << " " << amigos0[y];
                }

            if (primeiro)
            {
                primeiro = false;
                cout << amigos1[i];
            }
            else
                cout << " " << amigos1[i];
        }
    }

    cout << endl;

    return 0;
}