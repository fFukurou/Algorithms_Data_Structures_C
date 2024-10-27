#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;


    public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }


    int area()
    {
        return length*breadth;
    }


    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);

        return p;
    }

    void getDimensions()
    {
        int* arr = new int[2];
        cout<<"Enter Length and Breadth: "<<endl;
        cin>>length>>breadth;
    }

};


int main()
{
    Rectangle r = {0,0};
    r.getDimensions();


    int a = r.area();
    int per = r.perimeter();

    printf("Area = %d\nPerimeter = %d\n", a, per);

    return 0;
}
