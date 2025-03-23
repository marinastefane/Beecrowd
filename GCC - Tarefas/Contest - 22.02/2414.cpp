#include <iostream>

int main()
{
    int x = -1;
    int temp = 0;

    while (x != 0)
    {
        std::cin >> x;
        if (temp < x)
        {
            temp = x;
        }
    }

    std::cout << temp << std::endl;

    return 0;
}