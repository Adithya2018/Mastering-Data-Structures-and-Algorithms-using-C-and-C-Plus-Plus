#include <stdio.h>
#include <stdlib.h>

int fact_r(int n){
    if(n < 0){
        return -1 * fact_r(n*-1);
    }
    if(n == 0)
        return 1;
    return fact_r(n - 1) * n;
}

int fact_i(int n){
    int i;
    int fact = 1;
//    if(n == 0)
//        return fact;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    if(n < 0){
        for(i = 1; i <= (n*-1); i++)
            fact = fact * i;
        fact = -1 * fact;
    }
    return fact;
}

int main()
{
    int r;
    r = fact_r(-3);
    printf("%d \n",r);

    r = fact_i(-4);
    printf("%d \n",r);
    return 0;
}
