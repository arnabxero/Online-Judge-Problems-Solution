#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a = 5, b = 6;

    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a==-1 && b==-1)
            break;

        int diff = abs(a-b);
        if(diff<=50)
            printf("%d\n", diff);
        else printf("%d\n", abs(a-0)+abs(99-b)+1);
    }

    return 0;
}
