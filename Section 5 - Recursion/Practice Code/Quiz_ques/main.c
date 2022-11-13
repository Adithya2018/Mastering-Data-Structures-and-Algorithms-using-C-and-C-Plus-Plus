#include <stdio.h>
#include <stdlib.h>

int f(int n){
    static int i = 1;
    if(n >= 5) return n;
    n = n + i;
    i++;
    return f(n);
}

void foo(int n, int sum){
    int k = 0, j = 0;
    if(n == 0) return;
    k = n % 10;
    j = n/10;
    sum = sum + k;
    foo(j, sum);
    printf("%d", k);
}


int fun(int n){
	int x = 1, k;
	if(n == 1) return x;
	for (k = 1; k < n; ++k)
	x = x + fun(k) * fun(n - k);
	return x;
}

void count(int n){
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if(n > 1) count(n - 1);
    printf("%d", d);
}


int main()
{

    /*int a = 2048, sum = 0;
    foo(a, sum);
    printf("%d\n", sum);*/
    /*int p = 5;
    printf("%d" ,f1(&p,p));*/
    //printf("%d",f(1));
    count(3);
    return 0;
}
