#include<stdio.h>
int main ()
{
    double v, t;
    while(scanf("%lf %lf",&v, &t)==2)
    {
        if(v!=0 && t!=0)
        {
            double a = (v/t);
            t *= 2;
            double s = 0.500*a*(t*t);

            printf("%.0lf\n", s);
        }
        else
            printf("0\n");
    }
    return 0;
}
