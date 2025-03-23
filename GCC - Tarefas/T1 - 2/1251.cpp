// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s_input;
    bool first = true;

    while (getline(cin, s_input))
    {

        if (first)
            first = false;
        else
            cout << endl;

        vector<pair<char, int>> quant;
        int c = 0;
        vector<char> repeateds;
        bool pass;

        for (size_t i = 0; i < s_input.length(); i++)
        {                                                 // olha char por char para a contagem
            pass = false;                                 // nao deve passar o char a nao ser que ele ja tenha aparecido
            for (size_t k = 0; k < repeateds.size(); k++) // percorre o vetor de repeateds
                if (s_input[i] == repeateds[k])
                {                // checa se o char já não está na lista de repeateds
                    pass = true; // se esta em repetidos, passa a vez
                    break;
                }

            if (pass == false)
            { // se nao estiver em repetidos
                quant.push_back(make_pair(s_input[i], 1));
                for (size_t j = i + 1; j < s_input.length(); j++) // percorre o resto da string
                    if (s_input[i] == s_input[j])
                    {
                        quant[c].second++; // se tiver mais char's iguais pela string, soma o counter
                    }
                c++;
            }

            repeateds.push_back(s_input[i]);
        }

        sort(quant.begin(), quant.end(),
             [](const pair<char, int> &a, const pair<char, int> &b)
             {
                 if (a.second == b.second)
                     return a.first > b.first;
                 else
                     return a.second < b.second;
             });

        for (const auto &i : quant)
            cout << static_cast<int>(i.first) << " " << i.second << endl;
    }

    return 0;
}