#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle{
    int length;
    int breadth;

public:
    void inilialise(int l,int b){
        length = l;
        breadth = b;
    }

    float area(){
        return length * breadth;
    }
    float perimeter(){
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    int l,b;


    printf("Enter Length and Breadth\n");
    cin>>l>>b;
    r.inilialise(l,b);

    int a = r.area();
    int p = r.perimeter();

    cout<<"\nArea = "<<a<<" Perimeter = "<<p<<endl;
    return 0;
}
