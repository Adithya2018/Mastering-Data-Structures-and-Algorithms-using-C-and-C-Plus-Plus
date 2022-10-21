#include <stdio.h>
#include <stdlib.h>

int sum_r(int n){
    if(n == 0){
        return 0;
    }
    return sum_r(n - 1) + n;
}

int sum_i(int n){
    int s = 0;
    int i;
    for(i = 1; i <= n; i++)
        s = s + i;
    return s;
}

int sum(int n){
    return (n * (n + 1))/2;
}

int main()
{
    int r;
    r = sum_r(5);
    printf("%d \n", r);

    r = sum_i(10);
    printf("%d \n", r);

    r = sum(15);
    printf("%d \n", r);

    return 0;
}
