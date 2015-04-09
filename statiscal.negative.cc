#include <iostream>

int main()
{
    int val, count = 0;
    while (std::cin >> val)
    {
        if (val < 0)
        {
            count++;
        }
    }
    std::cout << "The count of negative is " << count << std::endl;
    return 0;
}
