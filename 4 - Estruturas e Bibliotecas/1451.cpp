// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string linha;
    while (getline(cin, linha))
    {
        list<char> texto;
        list<char>::iterator it = texto.begin();

        for (char c : linha)
        {
            if (c == '[')
            {
                it = texto.begin(); // Vai para o início do texto
            }
            else if (c == ']')
            {
                it = texto.end(); // Vai para o fim do texto
            }
            else
            {
                texto.insert(it, c);
            }
        }

        for (char c : texto)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}