#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    //struct Rectangle r={10,5};
    //cout<<r.length<<endl<<endl;

    //struct Rectangle *p=&r;

    struct Rectangle *p;
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle;

    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;


    return 0;
}
