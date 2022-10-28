#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n - 1) * n;
}

float C(int n, int r){
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);

    return t1/(t2 * t3);
}

int main()
{
    int n = 10, r = 1;
    printf("%f ",C(n,r));
    return 0;
}
