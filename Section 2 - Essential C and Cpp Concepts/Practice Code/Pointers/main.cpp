#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout<<a<<"\nPrinting 'a' value with '*p' "<<*p;
    cout<<endl<<"Printing the address "<<p;

    // For arrays
    int A[5] = {2,4,6,8,10};
    int *q;
    // to assign an array no need to use star.
    q = A;

    for(int i=0; i<5; i++){
        cout<<A[i]<<" "<<p->i<<endl;
    }

    return 0;
}
