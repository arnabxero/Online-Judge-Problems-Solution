#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    int n, i, j, k;
    scanf("%d", &n);


    for(i=0; i<n; i++)
    {
        char *a;
        a = (char*)malloc(1001*sizeof(char));

        k = 1;

        scanf("\n%s", a);

        for(j=0; j<strlen(a)-1; j++)
        {
            if(a[j]+1==a[j+1] && a[j]!=122)
                k = 1;
            if(a[j]+1!=a[j+1] && a[j]!=122)
            {
                k = 0;
                break;
            }
            if(a[j]-25==a[j+1] && a[j]==122)
                k = 1;
            if(a[j]-25!=a[j+1] && a[j]==122)
            {
                k = 0;
                break;
            }
        }
        if(k==0)
            printf("NO\n");
        if(k==1)
            printf("YES\n");
        free(a);
    }
    return 0;
}
