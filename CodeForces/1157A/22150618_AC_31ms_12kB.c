#include<stdio.h>
int checker(int *p, int i, int n)
{
    int j, r = 1;
    for(j=0; j<i; j++)
    {
        if(p[j]==n)
            r = 0;
    }
    return r;
}
int main ()
{
    int n, len = 0;
    int a[101];

    scanf("%d", &n);

    while(checker(a, len, n))
    {
        a[len++] = n;
        n++;

        while(n % 10 == 0)
            n /= 10;
    }
    printf("%d\n", len);
    
    return 0;
}
