#include <iostream>

using std::cout;
using std::endl;

#define PRINT_TYPE(t) cout << "Size of "#t" :" << sizeof(t) << endl;

int main()
{
    PRINT_TYPE(bool);
    PRINT_TYPE(char);
    PRINT_TYPE(wchar_t);
    PRINT_TYPE(short);
    PRINT_TYPE(int);
    PRINT_TYPE(long);
    PRINT_TYPE(float);
    PRINT_TYPE(double);
    PRINT_TYPE(long double);

    return 0;
}
