#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin>>n>>m;

    bool type1;

    if(n>m)
        type1 = true;
    else type1 = false;

    int i = 1, j = 1, team_num = 0;

    while(i<=n && j<=m)
    {
        if(type1)
        {
            i+=2;
            j++;
        }
        else
        {
            i++;
            j+=2;
        }
        team_num++;
    }

    cout<<team_num<<endl;
}
