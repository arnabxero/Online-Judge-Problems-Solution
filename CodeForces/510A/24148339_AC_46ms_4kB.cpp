#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m, i, j, zr = 0;

    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            if(zr == 0)
                zr = 1;
            else zr = 0;
        }
        for(j=0; j<m; j++)
        {
            if(i%2==0)
                printf("#");
            else
            {
                if(zr == 1)
                {
                    if(j<m-1)
                        printf(".");
                    else printf("#");
                }
                else
                {
                    if(j==0)
                        printf("#");
                    else printf(".");
                }
            }
        }

        printf("\n");
    }

}
