#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000001];
    long int i = 0, c = 0;

    while(gets(str))
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!='"')
                printf("%c", str[i]);
            else
            {
                if(c%2)
                    printf("''");
                else
                    printf("``");
                c++;
            }
        }
        printf("\n");
    }

    return 0;
}