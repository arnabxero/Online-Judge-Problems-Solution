#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);
    int a[n], b[n], s[n];

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        s[i] = a[i] + b[i];
    }
    for(i=0; i<n; i++)
        printf("%d\n", s[i]);

    return 0;
}
