#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

    using namespace std;

int main ()
{
    int n, i, m, a[3001], b[3001];
    while(scanf("%d", &n)==1)
    {
        m = 1;

        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(i=0; i<n-1; i++)
            b[i] = abs(a[i]-a[i+1]);
        
        sort (b, b+i);
        
        for(i=0; i<n-1; i++)
            if(b[i] == b[i+1])
            {
                m = 0;
                break;
            }

        if(m==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
