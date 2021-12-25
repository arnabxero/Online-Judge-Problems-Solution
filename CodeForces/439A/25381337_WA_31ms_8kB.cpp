#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, i;

    cin>>n>>d;

    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(i=0; i<n; i++)
    {
        sum+=arr[i];

        if(i<=(n-2))
            sum+=10;
    }

    if(sum>d)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    int c = 0;

    i = 0;

    while(i<n && d>=(arr[i]+10))
    {
        c+=2;

        d-=(arr[i]+10);

        i++;
    }

    c+=(d/5);

    cout<<c<<endl;
}
