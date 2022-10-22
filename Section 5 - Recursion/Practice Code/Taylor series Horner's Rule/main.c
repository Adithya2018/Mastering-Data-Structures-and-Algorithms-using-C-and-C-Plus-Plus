#include <stdio.h>
#include <stdlib.h>
// O(n)
double e_iter(int x, int n){
    double s = 1;
    for(;n > 0; n--){
        s = 1 + (double)x/n*s;
    }
    return s;
}

double e (int x, int n){
    static double s = 1;
    if(n == 0){
        return s;
    }
    s = 1 + (double)x/n*s;
    return e(x,n-1);
}

int main()
{
    printf("%f \n", e_iter(2,10));
    return 0;
}
