#include <stdio.h>
#include <stdlib.h>

int pow(int m, int n){
    if(n == 0)
        return 1;
    return pow(m, n-1) * m;
}
int pow_best(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow_best(m*m,n/2);
    }
    return m*pow_best(m*m,(n-1)/2);
}

int pow_iter(int m, int n){
    int p = 1;
    int i;
    for(i = 1; i <= n; i++){
        p = p * m;
    }
    return p;
}

int pow_iter_best(int m, int n){
    int p = 1;
    int i;
    if(n%2 == 1){
        p = p * m;
    }
    for(i = 1; i <= n/2; i++){
        p = p * m * m;
    }
    return p;
}

int main()
{
    int m,n;
    m = 2;
    printf("Enter m \n");
    scanf("%d",&m);
    n = 9;
    printf("Enter n\n");
    scanf("%d",&n);
    int p = pow_iter_best(m,n);
    printf("%d\n",p);
    return 0;
}
