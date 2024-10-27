#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// CALL BY VALUE
void fun(struct Rectangle r)
{
    r.length = 20;
    r.breadth = 55;
    cout<<"Call by VALUE Function\nLength: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl<<endl;
}

// CALL BY ADDRESS
void fun2(struct Rectangle *p)
{
    p->length = 20;
    p->breadth = 55;
    cout<<"Call by ADDRESS Function\nLength: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl<<endl;
}



int main()
{
    struct Rectangle r = {10,5};
    fun2(&r);
    printf(" Length: %d \n Breadth: %d", r.length, r.breadth);
    return 0;
}
