#include<stdio.h>
int main ()
{
    int n, i = 1, x, y;
    scanf("%d", &n);

    while(1)
    {
        if(i>n)
            break;

        scanf("%d %d", &x, &y);
        printf("Case %d: %d\n", i++, x+y);
    }
    return 0;
}
