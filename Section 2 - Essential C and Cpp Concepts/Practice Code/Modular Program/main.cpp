#include <iostream>
#include <stdio.h>

using namespace std;

float area(int l, int b){
    return l * b;
}
float perimeter(int l, int b){
    return 2 * (l + b);
}

int main()
{
    int length = 0, breadth = 0;

    printf("Enter Length and Breadth\n");
    cin>>length>>breadth;

    int a = area(length, breadth);
    int p = perimeter(length,breadth);

    cout<<"\nArea = "<<a<<" Perimeter = "<<p<<endl;
    return 0;
}
