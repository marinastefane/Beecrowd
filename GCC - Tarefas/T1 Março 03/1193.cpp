// Augusto Soares, Luan Marcelino, Marina Delfino

#include <bits/stdc++.h>

using namespace std;

int hexapDec(const string &hexadecimal)
{
    return stoi(hexadecimal, 0, 16);
}

string decpBin(int numero)
{
    stringstream ss;
    ss << uppercase << 2 << numero;
    return ss.str();
}


int binpDec(const string &binario)
{
    return stoi(binario, 0, 2);
}

string decpHexa(int numero)
{

    stringstream ss;
    ss << hex << numero;
    return ss.str();
}

int main()
{
    int N;
    cin >> N;

    for (int caso = 1; caso <= N; caso++)
    {
        string X, Y;
        cin >> X >> Y;

        int numDec;
        string numHexa, numBin;

        // identifica o formato e transforma em dec
        if (Y == "bin")
        {
            numDec = binpDec(X);
        }
        else if (Y == "dec")
        {
            numDec = stoi(X);
        }
        else if (Y == "hex")
        {
            numDec = hexapDec(X);
        }

        // decimal para os outros formatos
        if (Y != "dec")
        {
            numHexa = decpHexa(numDec);
            numBin = decpBin(numDec);
        }
        else if (Y != "hex")
        {
            numHexa = decpHexa(numDec);
            numBin = decpBin(numDec);
        }

        cout << "Case " << caso << ":" << endl;
        if (Y != "dec")
            cout << numDec << " dec" << endl;
        if (Y != "hex")
            cout << numHexa << " hex" << endl;
        if (Y != "bin")
            cout << numBin << " bin" << endl;
        cout << endl;
    }
}