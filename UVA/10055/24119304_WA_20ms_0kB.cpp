#include<stdio.h>
int main ()
{
    int x, y;

    while(scanf("%d %d", &x, &y)!=EOF)
    {
        printf("%d\n", y-x);
    }

    return 0;
}
