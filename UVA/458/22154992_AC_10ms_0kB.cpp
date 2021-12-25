#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[10001];
    int i;

    while(scanf("%s", ch)!=EOF)
    {
        for(i=0; i<strlen(ch); i++)
            printf("%c", ch[i]-7);
        printf("\n");
    }
    return 0;
}