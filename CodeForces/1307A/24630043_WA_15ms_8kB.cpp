#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
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

        int cnt = 0;
        cnt += arr[0];
        i = 1;

        while(d>0 && i<n)
        {
            if(arr[i]==0)
                i++;

            //cnt += 1;
            arr[i] -= 1;
            d -= i;
            if(d>=0)
                cnt++;
            //if(arr[i]==0)
                //i++;
        }

        cout<<cnt<<endl;

    }
}
