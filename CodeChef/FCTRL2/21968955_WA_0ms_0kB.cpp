#include<stdio.h>
int main ()
{
    int n, i, a, j, s;
    scanf("%d", &n);

    if(n>=1 && n<=100){
    for(i=0; i<n; i++)
    {
        s = 1;

        scanf("%d", &a);

        if(a>=1 && a<=100){
        for(j=1; j<=a; j++)
            s *= j;

        printf("%d\n", s);
    }}}
    return 0;
}
