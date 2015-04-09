#include <iostream>

int main()
{
    int sum = 0;
    int a,b;
    std::cin >> a >> b;
    int lower,higher;
    if(a <= b)
    {
        lower = a;
        higher = b;
    }
    else 
    {
        lower = b;
        higher = a;
    }
    int val = lower;
    while (val <= higher)
    {
        sum += val;
        ++val;
    }
    std::cout << "The sum of " << lower << " to " << higher << " is " << sum << std::endl;
    return 0;
}
