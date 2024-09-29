#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y);
    printf("The sum of %d and %d is %d", x, y, z);

    return 0;
}
