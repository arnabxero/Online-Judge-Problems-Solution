#include<stdio.h>
#include<string.h>
int asci(char c)
{
    int r = c;
    return c;
}
int main ()
{
    int i, n, j;
    char str[1001];
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf(" %s", str);
        for(j=0; j<strlen(str); j++)
        {
            if(asci(str[i])!=122)
            {
                if(asci(str[i])+1==asci(str[i+1]))
                    a[i] = 1;
                else
                {
                    a[i] = 0;
                    break;
                }
            }
            if(asci(str[i])==122)
            {
                if(asci(str[i])-25==asci(str[i+1]))
                    a[i] = 1;
                else
                {
                    a[i] = 0;
                    break;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
            printf("YES\n");
        if(a[i]==0)
            printf("NO\n");
    }
    return 0;
}
