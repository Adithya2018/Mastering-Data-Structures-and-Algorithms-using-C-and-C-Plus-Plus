#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void inilialise(Rectangle *r, int l,int b){
    r->length = l;
    r->breadth = b;
}

float area(Rectangle r){
    return r.length * r.breadth;
}
float perimeter(Rectangle r){
    return 2 * (r.length + r.breadth);
}

int main()
{
    Rectangle r;
    int l,b;


    printf("Enter Length and Breadth\n");
    cin>>l>>b;
    inilialise(&r,l,b);

    int a = area(r);
    int p = perimeter(r);

    cout<<"\nArea = "<<a<<" Perimeter = "<<p<<endl;
    return 0;
}
