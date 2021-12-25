#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int n, i, r, j;
    char *str;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        r = 0;
        str = (char*)malloc(1000*sizeof(char));
        scanf("%s",str);
        int len = strlen(str);

        for(j=0; j<len; j++)
        {
            if(str[j]=='a')
                if(str[j+1]=='b')
                    if(str[j+2]=='c')
                        r = 1;
        }
        if(r==0)
            printf("NO\n");
        else if(r==1)
            printf("YES\n");

        free(str);
    }

    return 0;
}
