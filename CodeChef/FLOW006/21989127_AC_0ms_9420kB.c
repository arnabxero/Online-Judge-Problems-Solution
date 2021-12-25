#include<stdio.h>
int main ()
{
    int n, i, x, sum;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = 0;

        scanf("%d", &x);

        while(x!=0)
        {
            sum += x%10;
            x /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
