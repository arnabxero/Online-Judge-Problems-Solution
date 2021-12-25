#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, abd1, abd2, m;
    while(scanf("%d", &n)==1)
    {
        int a[n], b[n];
        m = 1;

        for(i=0; i<n; i++)
            scanf("%d", &a[i]);


        for(i=0; i<n-1; i++)
        {
            b[i] = abs(a[i]-a[i+1]);
        }
        sort (b, b+i);
        for(i=0; i<n-2; i++)
        {
            if(b[i] == b[i+1])
            {
                m = 0;
                break;
            }
        }
        if(m==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }

    return 0;

}
