#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, rslt = 0, k;


    cin>>t>>m;

    int arr[t] = {0};

    for(k=0; k<t; k++)
    {
        int n;

        bool ck = false;

        cin>>n;

        int i, x;

        for(i=0; i<n; i++)
        {
            cin>>x;

            if(x<m)
                ck = true;
        }

        if(ck)
        {
            rslt++;
            arr[k] = 1;
        }
    }

    cout<<rslt<<endl;

    for(k=0; k<t; k++)
    {
        if(arr[k]==1)
            cout<<k+1<<" ";
    }
}
