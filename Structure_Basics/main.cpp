#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x; // it will allocate 4 bytes instead of 1 byte - this adjustment is called Padding
    // inside a structure it will take extra memory
};
/*struct Rectangle{
    int length;
    int breadth;
}r1,r2,r3;
*/
// struct Rectangle r1;
// Global variable declaration for structure

int main()
{
    char ch = 'e';
    struct Rectangle r1 = {10, 5};
    cout << sizeof(r1) << endl;
    cout << sizeof(ch) << endl;

    cout<< "Before Updating" << endl;
    cout << "Length of the rectangle " << r1.length << "\nBreadth of the Rectangle "
    << r1.breadth;

    r1.length = 13;
    r1.breadth = 24;

    cout << "\n\nAfter Updating" << endl;
    cout << "Length of the rectangle " << r1.length << "\nBreadth of the Rectangle "
    << r1.breadth;


    return 0;
}
