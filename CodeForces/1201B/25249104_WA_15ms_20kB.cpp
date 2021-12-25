#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r1 = 0, r2 = 0, n, i, x;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;

        if(x%2==0)
            r1++;
        else r2++;
    }

    if(r1%2==0 && r2%2==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
