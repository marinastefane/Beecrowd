#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input, num;
    vector<int> test;
    queue<int> A;
    stack<int> station;
    string s_input;

    while (cin >> input)
    {
        if (input == 0)
            break;

        cin.ignore();
        while (getline(cin, s_input))
        {

            if (s_input == "0")
                break;

            while (!A.empty())
                A.pop();
            for (int i = 1; i <= input; i++)
                A.push(i);
            while (!station.empty())
                station.pop();
            test.clear();

            stringstream ss(s_input);
            while (ss >> num)
                test.push_back(num);

            int i = 0;
            bool possible = true;

            while (!A.empty() || !station.empty())
            {

                if (A.empty() && station.top() != test[i])
                {
                    possible = false;
                    break;
                }

                if (!A.empty() && A.front() == test[i])
                {
                    A.pop();
                    i++;
                }
                else if (!station.empty() && station.top() == test[i])
                {
                    station.pop();
                    i++;
                }
                else
                {
                    station.push(A.front());
                    A.pop();
                }
            }

            if (possible)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        cout << endl;
    }

    return 0;
}
