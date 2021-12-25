#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int n, i, j, g;
    scanf("%d", &n);
    char *a;
    a = (char*)malloc(100001*sizeof(char));

    for(i=0; i<n; i++)
    {
        g = 0;
        scanf("%s", a);
        for(j=0; j<strlen(a); j++)
            if((a[j]=='1' && a[j+1]=='0' && a[j+2]=='1') || (a[j]=='0' && a[j+1]=='1' && a[j+2]=='0'))
                g = 1;

        if(g==1)
            printf("Good\n");
        else printf("Bad\n");
    }
    free(a);
    return 0;
}
