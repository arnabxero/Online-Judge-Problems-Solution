#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int e, p, k, r;

    int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &e, &p, &k, &r);

        int j, c = 0, x = 0;

        if((p*k)<=r)
        {
            printf("Case %d: -1\n", i);
            return 0;
        }
        else
        {
            while(e>0)
            {
                if(x==k)
                {
                    e = e + r;
                    x = 0;
                }

                e = e - p;
                c = c + 1;
                x = x + 1;
            }
            printf("Case %d: %d\n", i, c);
        }
    }
}
