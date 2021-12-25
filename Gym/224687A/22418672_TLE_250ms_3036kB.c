#include<stdio.h>
int prnt(int n, int i)
{
    if(i>n)
        return 0;
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Case %d: %d\n", i++, x+y);
    return prnt(n, i);
}
int main ()
{
    int n, i = 1;
    scanf("%d", &n);
    prnt(n, i);
    return 0;
}
