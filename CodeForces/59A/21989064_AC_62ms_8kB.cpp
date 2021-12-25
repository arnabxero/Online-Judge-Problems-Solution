#include<stdio.h>
#include<string.h>
int main ()
{
    int i, u = 0, l = 0;
    char ch[101];
    scanf("%s", ch);
    int n = strlen(ch);

    for(i=0; i<n; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
            l++;
        if(ch[i]>='A' && ch[i]<='Z')
            u++;
    }
    if(l>u)
        for(i=0; i<n; i++)
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i] = ch[i]+32;

    if(l<u)
        for(i=0; i<n; i++)
            if(ch[i]>='a' && ch[i]<='z')
                ch[i] = ch[i]-32;

    if(l==u)
        for(i=0; i<n; i++)
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i] = ch[i]+32;

    printf("%s", ch);

    return 0;

}
