#include<stdio.h>
int main()
{
    int n, a, b, c, d, i;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a+c!=b+d)
        {
            if(a+c>b+d)
                printf("1\n");
            else
                printf("2\n");
        }
        else
        {
            if(c>b)
                printf("1\n");
            else if(c<b)
                printf("2\n");
            else
                printf("-1\n");
        }

    }
return 0;
}
