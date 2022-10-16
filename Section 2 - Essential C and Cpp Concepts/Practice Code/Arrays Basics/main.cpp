#include <iostream>

using namespace std;

int main()
{
    // Array Declaration
    int A[5];

    A[0] = 27;
    A[1] = 10;
    printf("%d\n",A[1]);
    //...
    // A[n] = c;
    int B[5] = {2,4,6,8,10};

    for (int i = 0; i < 5; i++){
        cout << B[i] << endl;
        cout << sizeof(B) << endl;

        // 5 * 4 bytes for integers
        cout << sizeof(i)<< endl;
    }

    cout<<"\n End of the first Array"<<endl;

    for(int x:A){
        cout << x << endl;
    }

    return 0;
}
