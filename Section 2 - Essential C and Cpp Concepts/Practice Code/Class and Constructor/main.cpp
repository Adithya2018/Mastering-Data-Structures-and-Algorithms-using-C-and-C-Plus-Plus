#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle(){
        length = breadth = 1;
    }
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }

    float area();
    float perimeter();
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l){length = l;}
    void setBreadth(int b){breadth = b;}
    ~Rectangle(){
        cout<<"Destructor";
    }
};

float Rectangle::area(){
    return length * breadth;
}

float Rectangle::perimeter(){
    return 2 * (length + breadth);
}


int main()
{
    Rectangle r(10,5);
    int l,b;


    printf("Enter Length and Breadth\n");
    cin>>l>>b;
    r.setLength(l);
    r.setBreadth(b);


    int a = r.area();
    int p = r.perimeter();

    cout<<"\nArea = "<<a<<" Perimeter = "<<p<<endl;
    return 0;
}
