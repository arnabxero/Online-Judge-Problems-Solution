#include<stdio.h>
//Hello world

int one_mult(int n)
{
    int r = 1, c = 1;

    while(r!=0)
    {
        r = ((r*10)+1)%n;
        c++;
    }
    return c;
}

int main ()
{
    int n;

    while(scanf("%d", &n)==1)
    {
        int x = one_mult(n);

        printf("%d\n", x);
    }
    return 0;
}