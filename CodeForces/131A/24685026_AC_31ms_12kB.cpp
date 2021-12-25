#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    char ch[106];

    int c = 0, i;

    scanf("%s", ch);

    int n = strlen(ch);

    for(i=0; i<n; i++)
    {
        if(ch[i]<91)
            c++;
    }

    if(ch[0]>96 && c==(n-1))
    {
        printf("%c", ch[0]-32);

        for(i=1; i<n; i++)
            printf("%c", ch[i]+32);
    }

    else if(c==n)
    {
        for(i=0; i<n; i++)
            printf("%c", ch[i]+32);
    }

    else
        printf("%s", ch);

    return 0;
}

