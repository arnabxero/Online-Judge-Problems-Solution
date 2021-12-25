#include<bits/stdc++.h>

using namespace std;
//arnb
int main ()
{
    int t, x, y, i, j, ck;

    cin>>t;

    while(t--)
    {
        cin>>x>>y;

        for(i=0; i<x; i++)
        {
            if(i%2==0)
                ck = 1;
            else
                ck = 0;

            for(j=0; j<y; j++)
            {
                if(ck==1)
                {
                    if(j%2==0)
                        printf("*");
                    else
                        printf(".");
                }
                else
                {
                    if(j%2==0)
                        printf(".");
                    else
                        printf("*");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}