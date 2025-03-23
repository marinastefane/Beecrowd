#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    int maiorAB = (A + B + abs(A - B)) / 2;
    int maior = (maiorAB + C + abs(maiorAB - C)) / 2;

    cout << maior << " eh o maior" << endl;

    return 0;
}