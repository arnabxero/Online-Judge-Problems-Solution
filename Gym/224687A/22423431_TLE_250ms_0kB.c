#include<stdio.h>
int main ()
{
    int n, i = 1, x, y;
    scanf("%d", &n);

    if(n<=200000)
    {
        while(1)
        {
            if(i>n)
                break;

            scanf("%d %d", &x, &y);
            if(x<=100000 && y<=100000)
            {
                 printf("Case %d: %d\n", i++, x+y);
            }
            else return 0;
        }
    }
    else return 0;

    return 0;
}
