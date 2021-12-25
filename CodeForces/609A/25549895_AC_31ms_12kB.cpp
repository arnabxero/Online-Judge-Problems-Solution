#include<bits/stdc++.h>

using namespace std;

bool cmp(int x, int y)
{
    return (x>y);
}

int main()
{
    int n, m;

    cin>>n>>m;

    int arr[n], i;

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n, cmp);

    //for(i=0; i<n; i++)
        //cout<<arr[i]<<endl;

    i = 0;

    while(m>0)
    {
        m-=arr[i++];
    }

    cout<<i<<endl;
}
