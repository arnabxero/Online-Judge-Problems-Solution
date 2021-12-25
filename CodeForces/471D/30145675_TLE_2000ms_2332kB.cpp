#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll *sq1, ll *sq2, int x, int y)
{
    int i, j = 0, k, l;
    ll c = 0;

    for(i=0; i<x; i++)
    {
       // cout<<"Prim_Comp : "<<sq1[i]<<endl;
        if(sq2[0]==sq1[i])
        {
            bool isTrue = true;
            for(k=i; k<(i+y); k++)
            {
                if(sq1[k]!=sq2[j])
                {
                    isTrue = false;
                    break;
                }
               // cout<<"Comp : "<<sq1[k]<<" "<<sq2[j]<<endl;
                j++;
            }
            if(isTrue)
            {
                c++;
            }
            j = 0;
        }
    }
    cout<<c<<endl;
}
int main()
{
    int x, y;
    cin>>x>>y;

    ll mn;


    if(x>1 && y>1)
    {
        ll sq1[x-1], sq2[y-1], m, n;

        int i, j;

        cin>>m;
        for(i=1; i<x; i++)
        {
            cin>>n;
            sq1[i-1] = m-n;
            m = n;
        }

        cin>>m;
        for(i=1; i<y; i++)
        {
            cin>>n;
            sq2[i-1] = m-n;
            m = n;
        }

        /* for(i=0; i<x-1; i++)
            cout<<sq1[i]<<" ";
        cout<<endl;

        for(i=0; i<y-1; i++)
            cout<<sq2[i]<<" "; */

        solve(sq1, sq2, x-1, y-1);
    }
    else if(y==1 && x>1)
    {
        for(int xx=0; xx<x; xx++)
            cin>>mn;
        cin>>mn;

        cout<<x<<endl;
    }
    else if(x==1 && y>1)
    {
        cin>>mn;
        for(int yy=0; yy<y; yy++)
            cin>>mn;

        cout<<"0"<<endl;
    }
    else if(x==1 && y==1)
    {
        ll mx, nx;
        cin>>mx>>nx;

        if(nx<=mx)
            cout<<mx/nx<<endl;
        else
            cout<<"0"<<endl;
    }
}
