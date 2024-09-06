#include <iostream>

using namespace std;

int main()
{

    // REFRENCE MUST BE INITIALIZED WHEN IT IS DECLARED
    // CANNOT CHANGE THE REFENCE
    // 'r' WILL ALWAYS REFERENCE TO 'a'
    // CHANGING 'a' WILL CHANGE 'r' AND VICE VERSA
    // DOES NOT CONSUME MEMORY LIKE A POINTER

    int a = 10;
    int &r = a;

    cout<<a<<endl;
    cout<<r<<endl;
    cout<<sizeof(r)<<endl;

    int b = 30;
    r = b;

    cout<<"\nASSIGNING B TO R, WILL CHANGE BOTH A AND R:\n"<<endl;
    cout<<a<<endl<<r<<endl<<b<<endl;

    return 0;
}
