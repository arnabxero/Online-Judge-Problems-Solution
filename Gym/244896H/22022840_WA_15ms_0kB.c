#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);

    if(n>=1 && n<=20){
    for(i=0; i<n; i++)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);


        if((a+b)!=0 && a<=1000000000 && a>=(-1000000000) && b<=1000000000 && b>=(-1000000000) && c<=1000000000 && c>=(-1000000000))
        {
            double r = c/(a+b);

            if(r<=1)
                printf("Case %d: NO\n", i+1);
            if(r>1)
                printf("Case %d: %.0lf\n", i+1, r);
        }
    }
    }
    return 0;
}
