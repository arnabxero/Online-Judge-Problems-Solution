#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x, i, k, kn, pass = 0;
    scanf("%d %d", &x, &k);
    int *a;
    a = (int*)malloc(x*sizeof(int));

    for(i=0; i<x; i++)
        scanf("%d", &a[i]);
    kn = a[k];

    for(i=0; i<x; i++)
        if(a[i]>=kn && a[i]!=0)
            pass++;

    printf("%d", pass);

    free(a);
    return 0;

}
