#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        long int x, y;
        scanf("%ld %ld", &x, &y);
        printf("Case %d: %ld\n", i, x+y);
    }
    return 0;
}
