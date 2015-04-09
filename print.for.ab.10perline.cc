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
    
    for (int i = lower, count = 1; i <= higher; i++, count++)
    {
        std::cout << i;
        if (count < 10)
        {
            std::cout << "\t";
        }
        else
        {
            std::cout << "\n";
            count = 0;
        }
    }
    std::cout << std::endl;
    return 0;
}
