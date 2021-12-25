#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, i, cse = 1;

    cin>>t;

    while(t--)
    {
        int x, y;

        cin>>x>>y;

        int j, r = 0, rm1 = 0, rm2 = 0;

        for(j=1; j<=x; j++)
        {
            if(rm2>=y && rm1 == 0)
            {
                rm1 = 1;
                rm2 = 0;
            }
            if(rm2>=y && rm1 == 1)
            {
                rm1 = 0;
                rm2 = 0;
            }
            if(rm1 == 0)
            {
                r-=j;
                rm2++;
            }

            if(rm1 == 1)
            {
                r+=j;
                rm2++;
            }
        }
        cout<<"Case "<<cse<<": "<<r<<endl;
        cse++;
    }
}
