#include <iostream>
#include <string>
using namespace std;


bool subsequencia(const string &sequenciaS, const string &sequenciaR)
{
    int indiceS = 0;
    int indiceR = 0;

    while (indiceS < sequenciaS.length() && indiceR < sequenciaR.length())
    {
        if (sequenciaS[indiceS] == sequenciaR[indiceR])
        {
            indiceR++;
        }
        indiceS++;
    }

    return indiceR == sequenciaR.length();
}

int main()
{
    int numeroCasos;
    cin >> numeroCasos;

    for (int i = 0; i < numeroCasos; i++)
    {
        string sequenciaS;
        cin >> sequenciaS;

        int numeroConsultas;
        cin >> numeroConsultas;


        for (int j = 0; j < numeroConsultas; j++)
        {
            string sequenciaR;
            cin >> sequenciaR;

            if (subsequencia(sequenciaS, sequenciaR))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
