#include<stdio.h>
int main ()
{
    int a, b, i, j, sum, sumf, max, min;
    while(scanf("%d %d", &a, &b)==2)
    {
        sumf = 0;
        max = (a>b)?a:b;
        min = (a+b)-max;
        printf("%d %d ", a, b);

        for(i=min; i<=max; i++)
        {
            sum = 1;
            j = i;
            while(j!=1)
            {
                if(j%2==0)
                {
                    j /= 2;
                    sum++;
                }

                else
                {
                    j = 3*j+1;
                    sum++;
                }
            }
            if(sum>=sumf)
                sumf = sum;
        }
        printf("%d\n", sumf);
    }
    return 0;
}
