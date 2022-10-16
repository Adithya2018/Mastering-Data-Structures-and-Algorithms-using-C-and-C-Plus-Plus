#include <iostream>

using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapp(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}


int main()
{
    // Call by value
    int num1=10, num2=15,sum;
    sum = add(num1,num2);
    cout<<"Sum is "<<sum<<endl;

    int a= 34,b = 12;
    // call by pointer or address
    swap(&a,&b);
    cout<<"First Number: "<<a<<endl;
    cout<<"Second Number: "<<b<<endl;

    // call by reference (nickname of variable)
    int c = 123, d = 344;
    swapp(c,d);
    cout<<"First Number: "<<c<<endl;
    cout<<"Second Number: "<<d<<endl;

    return 0;
}
