#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int i, arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];


    int initb = (arr[n-1]%2)+(arr[n-1]/2);

    int ans = initb;


    for(i=(n-2); i>=0; i--)
    {
        initb = ((initb+arr[i])%2)+((initb+arr[i])/2);

        if(initb!=ans)
            ans = initb;
    }

    cout<<ans<<endl;
}
