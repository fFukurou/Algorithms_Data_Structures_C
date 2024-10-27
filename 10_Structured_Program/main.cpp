#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);

    return p;
}

void getDimensions(struct Rectangle *r)
{
    int* arr = new int[2];
    cout<<"Enter Length and Breadth: "<<endl;
    cin>>r->length>>r->breadth;
}


int main()
{
    Rectangle r = {0,0};
    getDimensions(&r);


    int a = area(r);
    int per = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, per);

    return 0;
}
