#include<stdio.h>

int cc = 0;

void fnnd(char *p1, char *p2, int n, int m)
{
    int i, j = 0, ar[m] = {0}, c = 1;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(p2[i] == p1[j])
            {
                ar[i] = 1;
                p1[j] = '+';
                break;
            }
        }
    }

    for(i=0; i<m; i++)
    {
        if(ar[i] == 0)
            c = 0;
    }

    if(c==1)
        cc++;

}

int main()
{
    int t, l;
    scanf("%d", &t);

    for(l=0; l<t; l++)
    {
        int n, m, i, j;

        scanf("%d %d", &n, &m);

        char str1[n], str2[m];

        scanf(" %s %s", str1, str2);

        for(i=0; i<n; i++)
        {
            if(str1[i] == str2[0])
                fnnd(str1, str2, n, m);
        }
        printf("%d\n", cc);
        cc = 0;
    }
}
