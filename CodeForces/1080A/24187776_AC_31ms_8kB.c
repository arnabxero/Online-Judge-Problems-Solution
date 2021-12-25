#include<stdio.h>

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int red = n*2, green = n*5, blue = n*8;
    int nt = ((red/k)+(green/k)+(blue/k));

    if((red%k)!=0)
        nt++;
    if((green%k)!=0)
        nt++;
    if((blue%k)!=0)
        nt++;

    printf("%d", nt);

return 0;

}
    