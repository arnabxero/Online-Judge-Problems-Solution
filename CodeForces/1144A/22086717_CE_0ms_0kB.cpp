#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i, j;
    scanf("%d", &n);
    int a;
    char str[100];

    for(i=0; i<n; i++)
    {
        a = 1;
        scanf(" %s", str);
        int len = strlen(str);

        sort(str, str+len);

        for(j=0; j<len-1; j++)
        {
            if(str[j]+1!=str[j+1])
                a = 0;
        }
        if(a==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
