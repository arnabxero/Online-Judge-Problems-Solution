#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, c = 0, mx = 0, x;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;

        if(x>mx)
            mx = x;

        if(mx == (i+1))
            c++;
    }
    cout<<c<<endl;
}
