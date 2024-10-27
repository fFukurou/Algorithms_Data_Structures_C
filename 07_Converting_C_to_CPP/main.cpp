#include <iostream>

using namespace std;

// ---------------------------- C ----------------------------
struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.breadth * r.length;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}


// ---------------------------- C++ ----------------------------
class RectangleCPP
{
    private:
    int length;
    int breadth;

    public:
    RectangleCPP(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int areaCPP()
    {
        return breadth * length;
    }

    void changeLengthCPP(int l)
    {
        length = l;
    }

};
int main()
{
    // struct Rectangle r;
    RectangleCPP r(10,5);

    r.areaCPP();
    r.changeLengthCPP(20);

}
