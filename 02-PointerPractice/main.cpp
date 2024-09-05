#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;

    p=&a;

    printf("A is %d, and it's address on the memory(p) is %p, which can be accessed by using *p: %d\n", a, p, *p);

    cout << "\n---------------------"<<endl;

    int A[5]={2,4,6,8,12};
    int *p3;
    p3=A;

    for(int i=0;i<5;i++){
        cout<<p3[i]<<endl;
    }

    int *p4;
    p4 = new int[5];
    p4[0]=10; p4[1]=15; p4[2]=14; p4[3]=21; p4[4]=31;

    for(int i=0;i<5;i++){
        cout<<p4[i]<<endl;
    }

    delete []p4;
    return 0;

}
