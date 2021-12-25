#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin>>n>>m;

    int r = 1, x, p = 0, i;

    for(i=0; i<n; i++)
    {
        cin>>x;

        if(p+x<=m)
            p+=x;

        else
        {
            r++;
            p = x;
        }
    }
    cout<<r<<endl;
}
