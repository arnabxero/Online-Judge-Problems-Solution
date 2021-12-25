#include<stdio.h>
int main ()
{
    double a, b, c, r;
    int n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        if((a+b)!=0)
        {
            r = c/(a+b);
            int x = (int)r;
            double y = x;

            if(r>1)
            {
                if(r==y)
                    printf("Case %d: %d\n", i+1, x);
                else
                    printf("Case %d: %lf\n", i+1, r);
            }
            if(r<=1)
            {
                printf("Case %d: NO\n", i+1);
            }
        }
    }
    return 0;
}
