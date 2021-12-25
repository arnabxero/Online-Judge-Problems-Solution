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
        i = 1;

        while(i<n && d>0)
        {
            while(arr[i]>0 && d>0)
            {
                arr[i] -= 1;
                d -= i;

                if(d>0)
                    rslt++;
            }
            i++;
        }
        cout<<rslt<<endl;
    }
}
