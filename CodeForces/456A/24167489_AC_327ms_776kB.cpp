#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i, r1 = 0, r2 = 0;

    cin>>n;

    int x[n], y[n];

    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(i=0; i<n; i++)
    {
        if(x[i]>y[i])
            r1 = 1;
        if(x[i]<y[i])
            r2 = 1;
    }

    if(r1 == 1 && r2 == 1)
        printf("Happy Alex");
    else printf("Poor Alex");
}
