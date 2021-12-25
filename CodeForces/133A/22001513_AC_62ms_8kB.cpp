#include<stdio.h>
#include<string.h>
int main ()
{
    int i, r = 0;
    char ch[101];
    scanf("%s", ch);

    for(i=0; i<strlen(ch); i++)
    {
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9')
            r = 1;
    }
    (r==1)?printf("YES"):printf("NO");

    return 0;
}
