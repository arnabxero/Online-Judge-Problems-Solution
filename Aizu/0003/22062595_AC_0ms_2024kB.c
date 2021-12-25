#include<stdio.h>
int main ()
{
    int n, a, b, c, i, r;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        r = 0;

        if((a*a)+(b*b)==(c*c))
            r = 1;
        else if((c*c)+(b*b)==(a*a))
            r = 1;
        else if((a*a)+(c*c)==(b*b))
            r = 1;

        if(r==1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
