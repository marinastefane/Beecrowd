#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        char D;
        string N;
        cin >> D >> N;

        if (D == '0' && N == "0")
            break;

        string resultado;
        for (char c : N)
        {
            if (c != D)
            {
                resultado += c;
            }
        }

        if (resultado.empty())
        {
            resultado = "0";
        }
        else
        {

           size_t pos = 0;
            while (pos < resultado.size() && resultado[pos] == '0')
            {
                ++pos;
            }

            if (pos == resultado.size())
            {
                resultado = "0";
            }
            else
            {
                resultado = resultado.substr(pos);
            }
        }

        cout << resultado << endl;
    }

    return 0;
}
