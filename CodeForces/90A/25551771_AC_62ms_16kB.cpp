#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r, g, b;

    cin>>r>>g>>b;

    int t = 0;
    int ck = 1;

    while(r>0 || g>0 || b>0)
    {
        if(ck==1)
        {
            r-=2;
            t++;
            ck = 2;
        }
        else if(ck==2)
        {
            g-=2;
            t++;
            ck = 3;
        }
        else if(ck==3)
        {
            b-=2;
            t++;
            ck = 1;
        }
    }


    cout<<t+29<<endl;
}
