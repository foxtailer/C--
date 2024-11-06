#include <iostream>
using namespace std;

int main()
{
    int32_t x, y, z;
    x = 1 + 4 * 3 / 2 * 5;
    cout << "x = " << x << "\n";

    y = 22 ^ 26 | 224 & 129;
    cout << "y = " << y << "\n";

    z = 3 | 4;
    cout << "z = " << z << "\n";
    return 0;
}