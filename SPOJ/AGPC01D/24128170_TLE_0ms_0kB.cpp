#include<bits/stdc++.h>

using namespace std;

int cc = 0;

void fnd(char *p1,char *p2, int n, int m)
{
    int i, j, arr[m] = {0}, c = 1;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(p2[i]==p1[j])
            {
                p1[j] = '+';
                arr[i] = 1;
                break;
            }
        }
    }
    for(i=0; i<m; i++)
    {
        if(arr[i]==0)
            c = 0;
    }

    if(c==1)
        cc++;
}
int main ()
{
    int t, i;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cc = 0;

        int n, m, j;
        cin>>n>>m;

        char ar1[n];
        char ar2[m];

        cin>>ar1>>ar2;

        for(j=0; j<n; j++)
        {
            if(ar1[j]==ar2[0])
                fnd(ar1, ar2, n, m);
        }

        cout<<cc<<endl;
    }
}
