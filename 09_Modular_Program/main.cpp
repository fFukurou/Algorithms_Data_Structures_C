#include <iostream>

using namespace std;

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    int p;
    p = 2 * (length + breadth);

    return p;
}

int* getDimensions()
{
    int* arr = new int[2];
    int length=0, breadth=0;
    cout<<"Enter Length and Breadth: "<<endl;
    cin>>length>>breadth;
    arr[0] = length;
    arr[1] = breadth;
    return arr;
}


int main()
{
    int* dimensions = getDimensions();

    int a = area(dimensions[0], dimensions[1]);
    int per = perimeter(dimensions[0], dimensions[1]);

    printf("Area = %d\nPerimeter = %d\n", a, per);

    return 0;
}
