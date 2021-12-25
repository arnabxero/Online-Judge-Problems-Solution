#include<bits/stdc++.h>
using namespace std;
const int MAXN = 105;
int arr[MAXN];

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>> T;
    while(T--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        int num=0,ans=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==1)
                ans=2;
        }
        cout << ans << endl;
    }
    return 0;
}
