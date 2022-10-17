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
    cout<<"Destructor";
}

int main()
{
    Arithmetic<int> ar(10,5);

    cout<<"Addition "<<ar.add()<<endl;
    cout<<"Substraction "<<ar.sub()<<endl;

    return 0;
}
