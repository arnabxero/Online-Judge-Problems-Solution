#include<stdio.h>
int main ()
{
    int n, i, j, a, b, c, d, s, l;
    scanf("%d", &n);
    l = n*2-1;

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=l; j++)
        {
            a = (l-i);
            b = l-(l-i+1);
            c = (l-j);
            d = l-(l-j+1);

            s = (a<b)?(a<c)?(a<d)?a:d:(c<d)?c:d:(b<c)?(b<d)?b:d:(c<d)?c:d;

            printf("%d ", (n-s));
        }
        printf("\n");
    }

    return 0;
}
