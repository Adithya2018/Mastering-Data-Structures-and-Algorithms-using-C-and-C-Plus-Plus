#include <stdio.h>
#include <stdlib.h>

int fun(int n){
    if(n > 100){
        printf("%d ", n);
        return n - 10;
    }
    return fun(fun(n + 11));
}

int main()
{
    int r;
    r = fun(30);

    printf("\nAnswer is %d\n", r);
    return 0;
}
