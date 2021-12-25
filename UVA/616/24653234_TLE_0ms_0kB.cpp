#include<stdio.h>

int main ()
{
    int x, i, chck;

    scanf("%d", &x);

    while(x!=(-1))
    {
        chck = 0;

        for(i=x-1; i>0; i--)
        {
            int c = 0, y = x;

            while(c<i)
            {
                if(y%i==1)
                {
                    c++;
                    int k = (y-1)/i;
                    y--;
                    y-=k;
                }
                else
                {
                    break;
                }
            }
            if(c==i)
            {
                chck = i;
                break;
            }
        }
        if(chck!=0)
            printf("%d coconuts, %d people and 1 monkey\n", x, chck);
        else    printf("%d coconuts, no solution\n", x);

        scanf("%d", &x);

    }
    return 0;
}






