#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[299999] = {2}, i, x, y = 0;

        for(i=0; i<n; i++)
        {
            cin>>x;
            arr[x] = 1;
        }

        for(i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                y++;
            }
        }
        cout<<y<<endl;
    }
}
