#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0;

    printf("Enter Length and Breadth\n");
    cin>>length>>breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout<<"\nArea = "<<area<<" Perimeter = "<<perimeter<<endl;
    return 0;
}
