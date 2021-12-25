#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        int n, m, j, r, d, rslt = 0;

        cin>>n;

        int arr[n];

        for(j=0; j<n; j++)
        {
            cin>>arr[j];
            arr[j]++;
        }

        sort(arr, arr+n);

        for(j=0; j<n; j=j)
        {
            r = 0;

            m = arr[j];

            while(j<n && arr[j]==m)
            {
                j++;
                r++;
            }

            if(r<=m)
                rslt = rslt+m;

            else
            {
                d = (r+(m-1))/m;
                rslt = rslt+(d*m);
            }
        }
        printf("Case %d: %d\n", i, rslt);
    }
}
