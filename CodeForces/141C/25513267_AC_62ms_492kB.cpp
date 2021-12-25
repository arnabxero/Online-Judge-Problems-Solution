#include<bits/stdc++.h>

using namespace std;

struct db
{
    char s[15];
    int x;
};

int cmp(struct db a, struct db b)
{
    return a.x<b.x;
}

int main()
{
    struct db a[10005];

    int rslt[10005];

    int n;

    int i, j;

    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%s %d",a[i].s, &a[i].x);
        }

        sort(a+1,a+n+1,cmp);

        int chck=0;

        for(i=1; i<=n; i++)
        {
            if(a[i].x>=i)
                chck=1;

            rslt[i]=i-a[i].x;

            for(j=1; j<i; j++)
            {
                if(rslt[j]>=rslt[i])
                {
                    rslt[j]++;
                }
            }
        }

        if(chck==1)
        {
            printf("-1\n");
            continue;
        }

        for(i=1; i<=n; i++)
        {
            printf("%s %d\n",a[i].s, rslt[i]);
        }
    }
}
