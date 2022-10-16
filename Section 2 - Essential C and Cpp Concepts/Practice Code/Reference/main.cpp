#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    // reference initialization this implies r is a
    // reference is not a pointer
    int &r=a;

    cout<<a<<" "<<r<<endl;

    a = 34;

    cout<<a<<" "<<r<<endl;
    int b = 32;

    r = b;

    cout<<a<<" "<<r<<endl;

    return 0;
}
