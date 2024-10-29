#include <iostream>

using namespace std;

int x=0;

int fun(int n)
{
    if (n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}

int fun2(int n)
{
    // static int x = 0;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}


int main()
{
    int r;
    int r2;
    r=fun(5);
    r2=fun2(5);
    printf("%d \n", r);
    printf("%d ", r2);
    r2=fun2(5);
    printf("%d ", r2);
    return 0;
}
