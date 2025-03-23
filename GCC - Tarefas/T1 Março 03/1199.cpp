// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int hexapDec(const string &hexadecimal)
{
    return stoi(hexadecimal, 0, 16);
}

string decpHexa(int numero)
{

    stringstream ss;
    ss << uppercase << hex << numero;
    return ss.str();
}

int main()
{
    string X;

    while (true)
    {
        cin >> X;
        if (X[0] == '-')
        {
            break;
        }

        // identificar numero decimal e hexa, hexa sao identificados por "0x..." e convertelos
        if (X.size() > 2 && X[0] == '0' && X[1] == 'x')
        {
            int valorDec = hexapDec(X);
            cout << valorDec << endl;
        }
        else
        {
            // Converte string decimal para inteiro
            int valorDec = stoi(X);

            string valorHexa = decpHexa(valorDec);
            cout << "0x" << valorHexa << endl;
        }
    }

    return 0;
}