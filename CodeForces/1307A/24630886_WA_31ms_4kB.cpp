#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, k;

    cin>>t;

    for(k=0; k<t; k++)
    {
        int n, d, i;

        cin>>n>>d;

        int arr[n];

        for(i=0; i<n; i++)
            cin>>arr[i];

        int rslt = arr[0];

        for(i=1; i<n; i++)
        {
            if((arr[i]*i)<d)
            {
                d -= (arr[i]*i);
                rslt += arr[i];
            }
            else if(d>i)
            {
                rslt += (d/i);
                d%=i;
            }
        }
        cout<<rslt<<endl;
    }
}
