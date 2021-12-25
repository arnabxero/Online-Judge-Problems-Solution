#include<stdio.h>
int main ()
{
    int x, y, t, sum, c;

    while(scanf("%d %d", &x, &y)!=EOF)
    {
        sum = x + y;
        c = 0;

        while(sum!=0)
        {
            c++;
            sum /= 10;
        }
        printf("%d\n", c);
    }
    return 0;
}
