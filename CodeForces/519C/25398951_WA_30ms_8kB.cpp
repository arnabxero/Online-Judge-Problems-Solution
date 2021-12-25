#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin>>n>>m;

    int mn = (n>m)?m:n;
    int mx = (n>m)?n:m;

    if(mx>=(mn*2))
    {
        cout<<mn<<endl;
        return 0;
    }

    int i = n, j = m, team_count = 0;

    while(i>0 && j>0)
    {
        if(i>j)
        {
            i-=2;
            j--;
        }

        else
        {
            i--;
            j-=2;
        }

        team_count++;

    }

    cout<<team_count<<endl;
}
