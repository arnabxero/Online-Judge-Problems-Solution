#include<bits/stdc++.h>

    using namespace std;

int v_c(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    else return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str1[1001], str2[1001];

    int i, j, c = 0;

    scanf("%s %s", str1, str2);

    int len1 = strlen(str1), len2 = strlen(str2);
    if(len1!=len2)
    {
        printf("No");
        return 0;
    }
    else
    {
        for(i=0; i<len1; i++)
        {
            if(v_c(str1[i]) != v_c(str2[i]))
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
            printf("Yes");
        else printf("No");
    }

    return 0;
}
