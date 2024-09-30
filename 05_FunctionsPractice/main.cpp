#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// CALL BY VALUE
void swapping(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y= temp;
}

// CALL BY ADDRESS
void swapping2(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// CALL BY REFERENCE
void swapping3(int &x, int &y)
{
    int temp;
}

void arrayFun1(int A[], int n)
{
    for(int i=0; i < n; i++)
    {
        A[1] = 15;
        cout<<A[i]<<endl;
    }
}

int * createArray(int size)
{
    int *p;
    p = new int[size];
    for(int i=0; i < size; i++)
    {
        p[i] = i+1;
    }
    return p;
}


// ---------------------------- MAIN




int main()
{
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y);
    printf("The sum of %d and %d is %d\n", x, y, z);

    // CALL BY VALUE
    swapping(x, y);

    // CALL BY ADDRESS
    printf("X = %d | Y = %d\nAFTER SWAPPING:\n", x, y);
    swapping2(&x, &y);
    printf("X = %d | Y = %d\n\n", x, y);

    // CALL BY REFERECE
    swapping3(x, y);

    // ARRAY AS PARAMETER
    int A[] = {2,4,6,8,10};
    int n = sizeof(A) / sizeof(int);

    arrayFun1(A, n);

    int *ptr, sz=5;

    ptr = createArray(5);


    for (int i=0; i<sz; i++)
    {
        cout<<ptr[i]<<endl;
    }


    return 0;
}
