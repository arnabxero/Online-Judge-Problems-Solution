#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000001];
    long int i, c = 0;
    scanf("%[^\n]s", str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]!='"')
            printf("%c", str[i]);
        else
        {
            if(c%2)
                printf("''");
            else printf("``");
            c++;
        }
    }
    return 0;
}
