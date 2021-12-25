#include<stdio.h>

int dig_sum(int x)
{
    int r = 0;

    while(x>0)
    {
        r += (x%10);
        x/=10;
    }
    return r;
}

int main ()
{
    int t, n, i;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);

        int z = dig_sum(n);

        printf("%d\n", z);
    }
}
