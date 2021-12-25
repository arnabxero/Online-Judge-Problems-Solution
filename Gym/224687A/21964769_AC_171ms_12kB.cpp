#include<stdio.h>
int main ()
{
    int n, i, a, b;
    scanf("%d", &n);

    if(n<=200000)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &a, &b);
            if(a>=1 && a<=100000 && b>=1 && b<=100000)
            {
                printf("Case %d: %d\n", i+1, a+b);
            }
        }
    }
    return 0;
}
