#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout<<a<<"\nPrinting 'a' value with '*p' "<<*p;
    cout<<endl<<"Printing the address "<<p;

    // For arrays
    printf("\n\n Pointer for Arrays \n");
    int A[5] = {2,4,6,8,10};
    int *q;
    // to assign an array no need to use star since A itself is an array
    q = A;

    for(int i=0; i<5; i++){
        cout<<A[i]<<" "<<q[i]<<endl;
    }

    // Array Created using Heap
    printf("\n\nArray created using Heap in C Programming \n");
    int *r;
    r = (int *) malloc(5*sizeof(int));

    for(int i = 0; i < 5; i++){
        r[i] = i*10;
    }

    for(int i = 0; i < 5; i++){
        cout << r[i]<<endl;
    }

    // Array created using Heap in C++ Programming
    printf("\n\nArray created using heap in C++\n");
    int *s;
    s = new int[5];

    for(int i = 0; i < 5; i++){
        s[i] = i * i;
    }
    for (int i = 0; i < 5; i++){
        cout<<s[i]<<endl;
    }

    // Always delete the dynamically allocated memory
    delete [] r;
    delete [] s;
    // free(p); Another method

    // All pointers are of the same size
    printf("Only size of the value changes between pointers");


    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;


    return 0;

}
