#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d, m, y1, y2;

    int t, i;

    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>d>>m>>y1>>y2;

        int c = 0;

        int j;

        if(d==29 && m==2)
        {
            for(j=y1; j<=y2; j++)
                if(j%400==0 || (j%100!=0 && j%4==0))
                    c++;

            printf("Caes %d: %d\n", i+1, c-1);
        }
        else
        {
            printf("Caes %d: %d\n", i+1, y2-y1-1);
        }

    }
}
