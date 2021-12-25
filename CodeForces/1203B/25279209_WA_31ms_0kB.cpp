#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x;

    cin>>t;

    while(t--)
    {
        int n, i;

        cin>>n;

        int arr[(4*n)+20];

        for(i=1; i<=4*n; i++)
            cin>>arr[i];

        sort(arr, arr+(4*n));

        int s = arr[0]*arr[4*n-1];

        int f = 0;

        for(i=0; i<n; i++)
        {
            int l = (2*i), r = (4*n-(2*i)-1);

            if(arr[l]!=arr[l+1]||arr[r]!=arr[r-1]||arr[l]*arr[r]!=s)
            {
                f = 1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }
}
