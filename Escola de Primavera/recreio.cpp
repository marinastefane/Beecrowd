#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int M;
        cin >> M;

        vector<int> notas(M);
        vector<int> notasOrdenadas;

        for (int i = 0; i < M; i++)
        {
            cin >> notas[i];
            notasOrdenadas.push_back(notas[i]);
        }

        sort(notasOrdenadas.rbegin(), notasOrdenadas.rend());

        int count = 0;
        for (int i = 0; i < M; i++)
        {
            if (notas[i] == notasOrdenadas[i])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
