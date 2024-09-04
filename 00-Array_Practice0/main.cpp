#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=25;

    int B[10] = {2,4,6,8,10};
    int C[] = {2,4,6,8,10};


    printf("\nBytes: %d", sizeof(A));
    printf("\n%d", A[1]);
    printf("\n%d\n", B[4]);

    int array_length = sizeof(B) / sizeof(B[0]);
    for (int i=0; i < array_length; i++ ) {
        printf("%d\n", B[i]);
    }

    for (int x:A){
        cout<<x<<endl;
    }

    int n;
    cout<<"Enter Size";
    cin>>n;
    int D[n];
    D[0] = 2;

    for (int x:D) {
        cout<<x<<endl;
    }




    return 0;
}
