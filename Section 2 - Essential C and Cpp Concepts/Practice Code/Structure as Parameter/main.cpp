#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle r){
    cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
}

int main()
{
    Rectangle r = {10,5};
    fun(r);

    printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    return 0;
}
