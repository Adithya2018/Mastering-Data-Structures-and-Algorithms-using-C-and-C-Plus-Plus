#include <iostream>

using namespace std;

void fun(int A[], int n){
    cout<<sizeof(A)/sizeof(int)<<endl;
//    for(int a:A)
//        cout<<a<<endl;
// it is a pointer
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
}

int * fun(int size){
    int *p;
    p = new int[size];
    for(int i = 0; i < size; i++){
        p[i] = i+1;
    }
    return p;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n=5;

    fun(A, n);
    // Array is always passed as pointer
    cout<<endl<<sizeof(A)/sizeof(int)<<endl;

    for(int x:A){
        cout<<x<<" ";
    }

    printf("\nDynamically created!\n");
    int *ptr, sz;
    cout<<"Enter the size \n";
    cin>>sz;
    ptr = fun(sz);

    for(int i=0; i<sz;i++){
        cout<<ptr[i]<<endl;
    }

    return 0;
}
