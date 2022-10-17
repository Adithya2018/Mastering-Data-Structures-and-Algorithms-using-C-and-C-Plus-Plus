#include <iostream>
#include <stdio.h>

using namespace std;

template<class T>
class Arithmetic{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    ~Arithmetic();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add(){
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::sub(){
    T c;
    c = a - b;
    return c;
}

template<class T>
Arithmetic<T>::~Arithmetic(){
    cout<<"Destructor \n";
}

int main()
{
    Arithmetic<int> ar1(10,5);

    cout<<"Add. of integers "<<ar1.add()<<endl;
    cout<<"Sub. of integers "<<ar1.sub()<<endl;


    Arithmetic<float> ar2(10.34,5.43);

    cout<<"Add. of float "<<ar2.add()<<endl;
    cout<<"Sub. of float "<<ar2.sub()<<endl;


    Arithmetic<char> ar3('F','B');

    cout<<"Add. of characters "<<ar3.add()<<endl;
    cout<<"Sub. of characters "<<ar3.sub()<<endl;

    return 0;
}
