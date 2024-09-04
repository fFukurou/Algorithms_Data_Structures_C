#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;

} r1={20,15}, r2;

struct Rectangle r3={10,5};;


int main()
{
    r2.breadth = 232;
    cout<<r1.length<<endl;
    printf("%d", r1.breadth);
    // Each integer takes 4 bytes, so 8 bytes total
    printf("\nAmount of bytes this object struct is taking: %llu", sizeof(r1));
    return 0;
}
