#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n];

    int i, c = 0, mx;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];

        if(i==0)
            mx = arr[i];
        if(i>0 && arr[i]>mx)
            mx = arr[i];
    }

    if(mx == arr[0])
    {
        cout<<'0'<<endl;
        return 0;
    }

    while(arr[0]<=mx)
    {
        c++;
        //cout<<arr[0]<<' '<<mx<<endl;
        arr[0]++;
        mx--;

    }
    cout<<c;
}
