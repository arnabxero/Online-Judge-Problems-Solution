#include<stdio.h>
int main ()
{
    int a, b, c, n, i;

    scanf("%d", &n);

    if(n>=1 && n<=20)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if((a>=(-1000000000) && a<=(1000000000)) && (b>=(-1000000000) && b<=(1000000000)) && (c>=(-1000000000) && c<=(1000000000)) && ((a+b)!=0))
            {
                if(c/(a+b)<=1)
                printf("Case %d: NO\n", i+1);
                else printf("Case %d: %d\n", i+1, c/(a+b));
            }
        }
    }
    return 0;
}
