#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n, i;
    scanf("%d", &n);
    int *a;
    a = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]>10)
            printf("%d 10\n", a[i]-10);
        else printf("0 %d\n", a[i]);
    }
    free(a);
    return 0;
}
