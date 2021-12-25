#include<stdio.h>
int main ()
{
    unsigned int n, i;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        unsigned int x, y;
        scanf("%d %d", &x, &y);
        printf("Case %d: %d\n", i, x+y);
    }
    return 0;
}
