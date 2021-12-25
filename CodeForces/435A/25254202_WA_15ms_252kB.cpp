#include<bits/stdc++.h>

using namespace std;
//lol
int main()
{
    int n, m;

    cin>>n>>m;

    int x, r = 0, c = 0, i;

    for(i=0; i<n; i++)
    {
        cin>>x;
        r+=x;
    }

    c = r/m;

    if(r%m!=0)
        c+=1;

    cout<<c<<endl;
}