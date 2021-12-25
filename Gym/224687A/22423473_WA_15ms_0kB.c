#include<stdio.h>
int main ()
{
    int n, i, x, y;
    scanf("%d", &n);

    if(n<=200000)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &x, &y);

            if(x<=100000 && y<=100000)
                 printf("Case %d: %d\n", i, x+y);
        }
    }
    else return 0;

    return 0;
}
