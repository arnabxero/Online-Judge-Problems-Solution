#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n, i, c = 0;
    scanf("%d", &n);
    int *a;
    a = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &(*(a+i)));
    char ch;
    scanf("\n%c", &ch);


    if(ch=='b')
        for(i=0; i<n; i+=2)
            c += *(a+i);

    if(ch=='g')
        for(i=1; i<n; i+=2)
            c += *(a+i);

    printf("%d", c);
    free(a);

    return 0;

}
