#include<stdio.h>

int one_mult(int n, int v)
{
    int r = 0, c = 0;

    do
    {
        r = ((r*10)+v)%n;
        c++;
    }
    while(r!=0);
    
    return c;
}

int main ()
{
    int n, v, t, i;
    
    scanf("%d", &t);
    

    for(i=1; i<=t; i++)
    {
   	 scanf("%d %d", &n, &v);
 
        int x = one_mult(n, v);

        printf("Case %d: %d\n", i, x);
    }
    return 0;
}