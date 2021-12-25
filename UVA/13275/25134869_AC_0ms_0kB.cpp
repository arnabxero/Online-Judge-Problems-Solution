#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,n,c,d,y1,y2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        c=0;
        cin>>d>>m>>y1>>y2;
        if(m!=2)
        {
            printf("Case %lld: %lld\n",i,(y2-y1));
        }
        else
        {
            if(d!=29)
            {
                printf("Case %lld: %lld\n",i,(y2-y1));
            }
            else
            {

                for(j=y1; j<=y2; j=j+4)
                {
                    if((j%4==0 && j%100!=0) || j%400==0 )
                    {
                        c++;
                    }

                }
                printf("Case %lld: %lld\n",i,c-1);
            }
        }
    }

    return 0;
}

