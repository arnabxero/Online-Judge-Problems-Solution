#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, i, r1 = 0, r2 = 0;

    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n; i++)
    {
        // cout<<r2<<"+";

        if(i<2)
            r2++;

        if(i>=2)
            if(arr[i]==arr[i-1]+arr[i-2])
                r2++;

        else
            r2=2;

        if(r2>r1)
            r1=r2;
    }

    cout<<r1;

    return 0;
}

