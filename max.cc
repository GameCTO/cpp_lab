#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;
    int max = (a > b) ? a : b;
    std::cout << "The max of " << a << " and " << b << " is " << max << std::endl;
    return 0;
}
