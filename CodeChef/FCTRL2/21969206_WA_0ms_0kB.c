#include<stdio.h>
int main ()
{
    int n, i, j, x;
    scanf("%d", &n);
    int a, s[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        x = 1;

        for(j=1; j<=a; j++)
            x *= j;
        s[i] = x;
    }
    for(i=0; i<n; i++)
        printf("%d\n", s[i]);

    return 0;
}
