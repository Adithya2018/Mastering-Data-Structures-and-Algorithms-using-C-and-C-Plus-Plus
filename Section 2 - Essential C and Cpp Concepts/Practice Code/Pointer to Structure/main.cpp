#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    // Note: In C++ struct is not compulsory
    struct Rectangle r={10,5};

    cout<<"Length: "<<r.length<<endl;
    cout<<"Breadth: "<<r.breadth<<endl;

    Rectangle *p=&r;
    cout<<"Length using Pointer "<<p->length<<endl;
    cout<<"Breath using Pointer "<<p->breadth<<endl;

    // To dynamically allocate heap memory to structure in C
    Rectangle *q;
    q = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // For C++ we can use this:
    //Rectangle *q = new Rectangle;

    q->length = 15;
    q->breadth = 7;

    cout<<"Length using dynamic memory "<<q->length<<endl;
    cout<<"Breadth using dynamic memory "<<q->breadth<<endl;


    return 0;
}
