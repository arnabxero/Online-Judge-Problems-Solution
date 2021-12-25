#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int m, n, i, j, x, mx = 0, c = 0;

        cin>>n;

        int arr[n];

        for(i=0; i<n; i++)
        {
            cin>>x;
            arr[i] = x*20;
        }

        for(i=0; i<n; i++)
        {
            cin>>x;
            arr[i] -= (x*10);
            if(arr[i]<0)
                arr[i] = 0;
            if(arr[i]>mx)
            {
                mx = arr[i];
            }
        }
        cout<<mx<<endl;
    }
}
