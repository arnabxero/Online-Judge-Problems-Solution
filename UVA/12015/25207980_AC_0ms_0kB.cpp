#include <stdio.h>
#include <string.h>

int main()
{
    int t,c=1,r[10],max,i;
    char str[10][100];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s%d",&str[0],&r[0]);
        max=r[0];
        for (i=1;i<10;i++)
        {
            scanf("%s%d",&str[i],&r[i]);
            if (max<r[i]) max=r[i];
        }
        printf("Case #%d:\n",c++);
        for (i=0;i<10;i++)
            if (r[i]==max) printf("%s\n",str[i]);
    }
    return 0;
}