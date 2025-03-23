#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs, Pc, Pf;

    std::cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    Pc = Cv * 3 + Ce;
    Pf = Fv * 3 + Fe;

    if (Pc > Pf)
    {
        std::cout << "C";
    }
    else if (Pc < Pf)
    {
        std::cout << "F";
    }
    else
    {
        if (Cs > Fs)
        {
            std::cout << "C";
        }
        else if (Cs < Fs)
        {
            std::cout << "F";
        }
        else
        {
            std::cout << "=";
        }
    }
    std::cout << std::endl;

    return 0;
}