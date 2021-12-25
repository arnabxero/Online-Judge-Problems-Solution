#include<stdio.h>
int main ()
{
    int n, i, count = 0;
    char ch;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf(" %c", &ch);

    if(ch=='b')
        for(i=0; i<n; i+=2)
            count += a[i];
    else if(ch=='g')
        for(i=1; i<n; i+=2)
            count += a[i];
            
    printf("%d", count);

    return 0;
}
