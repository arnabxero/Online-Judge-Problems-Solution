#include<stdio.h>
#include<string.h>

int main ()
{
    int len, c = 0, i, j, k;
    char str[105];

    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<len; i++)
        for(j=i+1; j<len; j++)
            for(k=j+1; k<len; k++)
                if(str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q')
                    c++;

    printf("%d", c);
}
