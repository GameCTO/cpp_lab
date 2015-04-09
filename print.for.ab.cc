#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;
    int lower, higher;
    if (a <= b)
    {
        lower = a;
        higher = b;
    }
    else
    {
        lower = b;
        higher = a;
    }
    for (int i = lower; i <= higher; i++)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    return 0;
}
