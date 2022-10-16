#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers \n";
    cin>>a>>b;
    cout<<"\nSum is "<<add(a,b);
    return 0;
}
